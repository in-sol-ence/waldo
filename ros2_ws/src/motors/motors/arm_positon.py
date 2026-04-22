#!/usr/bin/env python3
"""
ROS 2 service node for commanding six Feetech STS3215 serial-bus servos.

Expected service definition:

    int8[6] positions
    ---
    bool reached

Expected servoLimits.json in this file's directory:

    {
      "1": {"limit_left": 0, "limit_right": 120},
      "2": {"limit_left": 10, "limit_right": 120},
      "3": {"limit_left": 0, "limit_right": 120},
      "4": {"limit_left": 30, "limit_right": 120},
      "5": {"limit_left": 0, "limit_right": 90},
      "6": {"limit_left": 0, "limit_right": 90}
    }

Note: int8 request fields can only carry -128 through 127. If the arm needs
angles above 127 degrees, change the service definition to int16[6] or wider.

Run example:

    ros2 run <your_package> arm_position_service \
      --ros-args \
      -p serial_port:=/dev/ttyACM0

The ftservo-python-sdk package is imported as scservo_sdk.
"""

from __future__ import annotations

import json
import time
from collections.abc import Iterable
from pathlib import Path
from typing import Dict, List, Tuple

import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter

from motor_interfaces.srv import ArmPos
from scservo_sdk import PortHandler, sms_sts


COMM_SUCCESS = 0

ADDR_TORQUE_ENABLE = 40
ADDR_PRESENT_POSITION = 56

POSITION_MIN = 0
POSITION_MAX = 4095
DEGREES_PER_REVOLUTION = 360.0


def degrees_to_position(degrees: float) -> int:
    """Convert an STS3215 angle in degrees to its raw 0-4095 position."""
    raw = round(degrees * (POSITION_MAX + 1) / DEGREES_PER_REVOLUTION)
    return max(POSITION_MIN, min(POSITION_MAX, raw))


class ArmPositionService(Node):
    def __init__(self) -> None:
        super().__init__("arm_position_service")

        self.declare_parameter("service_name", "arm_pos")
        self.declare_parameter("serial_port", "/dev/ttyACM0")
        self.declare_parameter("baudrate", 1000000)
        self.declare_parameter("servo_ids", [1, 2, 3, 4, 5, 6])
        self.declare_parameter("speed", 500)
        self.declare_parameter("acceleration", 50)
        self.declare_parameter("tolerance_degrees", 2.0)
        self.declare_parameter("timeout_seconds", 10.0)
        self.declare_parameter("poll_period_seconds", 0.05)
        self.declare_parameter("limit_file", "servoLimits.json")
        self.declare_parameter("ping_on_start", True)

        self.service_name = self.get_parameter("service_name").value
        self.serial_port = self.get_parameter("serial_port").value
        self.baudrate = self.get_parameter("baudrate").value
        self.servo_ids = self._read_integer_array_parameter("servo_ids")
        self.speed = self.get_parameter("speed").value
        self.acceleration = self.get_parameter("acceleration").value
        self.tolerance_degrees = self.get_parameter("tolerance_degrees").value
        self.timeout_seconds = self.get_parameter("timeout_seconds").value
        self.poll_period_seconds = self.get_parameter("poll_period_seconds").value
        self.limit_file = self.get_parameter("limit_file").value
        self.ping_on_start = self.get_parameter("ping_on_start").value

        self.limits = self._load_limits()
        self._validate_limits_cover_servos()
        self.tolerance_steps = max(1, degrees_to_position(self.tolerance_degrees))

        self.port_handler = PortHandler(self.serial_port)
        if not self.port_handler.openPort():
            raise IOError(f"Failed to open serial port {self.serial_port}")
        if not self.port_handler.setBaudRate(self.baudrate):
            self.port_handler.closePort()
            raise IOError(f"Failed to set baudrate {self.baudrate} on {self.serial_port}")

        self.servo_bus = sms_sts(self.port_handler)
        self.get_logger().info(
            f"Connected to STS3215 bus on {self.serial_port} at {self.baudrate} baud"
        )

        self.service = self.create_service(
            ArmPos,
            self.service_name,
            self.handle_arm_position,
        )
        self.get_logger().info(f"Service '{self.service_name}' ready")

    def destroy_node(self) -> None:
        try:
            self.port_handler.closePort()
        except Exception as exc:
            self.get_logger().warn(f"Failed to close serial port cleanly: {exc}")
        super().destroy_node()

    def _read_integer_array_parameter(self, name: str) -> List[int]:
        parameter = self.get_parameter(name)
        if parameter.type_ == Parameter.Type.INTEGER_ARRAY:
            return [int(value) for value in parameter.value]
        if isinstance(parameter.value, Iterable) and not isinstance(parameter.value, str):
            return [int(value) for value in parameter.value]
        raise ValueError(f"{name} must be an integer array parameter")

    def _load_limits(self) -> Dict[int, Tuple[float, float]]:
        # Use the module-level `limits` array instead of loading from a JSON file.
        # The `limits` array contains raw servo positions (0..POSITION_MAX).
        # Convert those raw positions to degrees so the rest of the code can
        # validate angle requests in degrees.
        # Use the module-level `limits` variable defined above.
        raw_list = [
            [751, 3472],
            [745, 3306],
            [698, 3013], 
            [698, 3013],
            [0, 4095],
            [2025, 2549]
        ]

        if not isinstance(raw_list, list):
            raise ValueError("limits must be a list of [left, right] entries")

        limits_map: Dict[int, Tuple[float, float]] = {}
        for idx, raw_limit in enumerate(raw_list, start=1):
            try:
                left_raw, right_raw = raw_limit
            except Exception as exc:
                raise ValueError(
                    f"invalid limit entry at index {idx}: {raw_limit}"
                ) from exc

            # Convert raw positions (0..POSITION_MAX) to degrees (0..360)
            left_deg = float(left_raw) * DEGREES_PER_REVOLUTION / (POSITION_MAX + 1)
            right_deg = float(right_raw) * DEGREES_PER_REVOLUTION / (POSITION_MAX + 1)
            limits_map[idx] = (min(left_deg, right_deg), max(left_deg, right_deg))

        return limits_map

    def _validate_limits_cover_servos(self) -> None:
        missing = [servo_id for servo_id in self.servo_ids if servo_id not in self.limits]
        if missing:
            raise ValueError(f"limits array is missing entries for servo IDs: {missing}")

    def handle_arm_position(self, request, response):
        positions = list(request.positions)

        if len(positions) != len(self.servo_ids):
            self.get_logger().error(
                f"Expected {len(self.servo_ids)} positions, got {len(positions)}"
            )
            response.reached = False
            return response

        try:
            targets = self._validate_and_convert_targets(positions)
            self._send_targets(targets)
            response.reached = self._wait_until_reached(targets)
        except Exception as exc:
            self.get_logger().error(f"Arm position command failed: {exc}")
            response.reached = False

        return response

    def _validate_and_convert_targets(
        self, requested_angles: List[int]
    ) -> Dict[int, int]:
        targets: Dict[int, int] = {}

        for servo_id, requested_angle in zip(self.servo_ids, requested_angles):
            angle = float(requested_angle)
            lower, upper = self.limits[servo_id]

            if not lower <= angle <= upper:
                raise ValueError(
                    f"Servo {servo_id} angle {angle:g} is outside configured "
                    f"limits [{lower:g}, {upper:g}]"
                )
            if not 0.0 <= angle <= DEGREES_PER_REVOLUTION:
                raise ValueError(
                    f"Servo {servo_id} angle {angle:g} cannot be converted directly "
                    "to an STS3215 position; expected 0-360 degrees"
                )

            targets[servo_id] = degrees_to_position(angle)
        print(targets)
        return targets

    def _send_targets(self, targets: Dict[int, int]) -> None:
        for servo_id, target in targets.items():
            self._write_torque_enable(servo_id)
            result = self.servo_bus.WritePosEx(
                servo_id,
                target,
                int(self.speed),
                int(self.acceleration),
            )
            self._check_write_result(result, servo_id, "WritePosEx")

    def _write_torque_enable(self, servo_id: int) -> None:
        result = self.servo_bus.write1ByteTxRx(servo_id, ADDR_TORQUE_ENABLE, 1)
        self._check_write_result(result, servo_id, "enable torque")

    def _check_write_result(self, result, servo_id: int, operation: str) -> None:
        if result is None:
            return
        if not isinstance(result, tuple):
            return
        if len(result) < 2:
            return

        comm_result, error = result[-2], result[-1]
        if comm_result != COMM_SUCCESS:
            raise IOError(
                f"{operation} failed for servo {servo_id}; comm_result={comm_result}"
            )
        if error:
            raise IOError(f"{operation} returned servo {servo_id} error={error}")

    def _wait_until_reached(self, targets: Dict[int, int]) -> bool:
        deadline = time.monotonic() + float(self.timeout_seconds)
        pending = set(targets.keys())

        while pending and time.monotonic() < deadline:
            for servo_id in list(pending):
                position = self._read_position(servo_id)
                if abs(position - targets[servo_id]) <= self.tolerance_steps:
                    pending.remove(servo_id)

            if pending:
                time.sleep(float(self.poll_period_seconds))

        if pending:
            self.get_logger().warn(
                "Timed out before all servos reached target. "
                f"Still pending: {sorted(pending)}"
            )
            return False

        return True

    def _read_position(self, servo_id: int) -> int:
        position, comm_result, error = self.servo_bus.read2ByteTxRx(
            servo_id,
            ADDR_PRESENT_POSITION,
        )
        if comm_result != COMM_SUCCESS:
            raise IOError(
                f"Failed to read position for servo {servo_id}; comm_result={comm_result}"
            )
        if error:
            raise IOError(f"Servo {servo_id} returned position read error={error}")
        return int(position)

def main(args=None) -> None:
    rclpy.init(args=args)
    node = None

    try:
        node = ArmPositionService()
        rclpy.spin(node)
    finally:
        if node is not None:
            node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()