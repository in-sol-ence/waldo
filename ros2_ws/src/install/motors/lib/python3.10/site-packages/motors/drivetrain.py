#!/usr/bin/env python3
"""
ROS 2 service node for commanding three STS3215 drivetrain motors.

Expected service definition in motor_interfaces/srv/WheelVel.srv:

    int8[3] vel
    ---
    bool complete

The request values are sent directly as wheel-mode velocity commands to
motor IDs 6, 7, and 8, in that order.

Run example:

    ros2 run <your_package> drivetrain_velocity_service \
      --ros-args \
      -p serial_port:=/dev/ttyACM0

The ftservo-python-sdk package is imported as scservo_sdk.
"""

from __future__ import annotations

from collections.abc import Iterable
from typing import Dict, List

import rclpy
from rclpy.node import Node
from rclpy.parameter import Parameter

from motor_interfaces.srv import WheelVel
from scservo_sdk import PortHandler, sms_sts


COMM_SUCCESS = 0

ADDR_MODE = 33
WHEEL_MODE = 1


class DrivetrainVelocityService(Node):
    def __init__(self) -> None:
        super().__init__("drivetrain_velocity_service")

        self.declare_parameter("service_name", "wheel_vel")
        self.declare_parameter("serial_port", "/dev/ttyACM0")
        self.declare_parameter("baudrate", 1000000)
        self.declare_parameter("motor_ids", [7, 8, 9])
        self.declare_parameter("acceleration", 0)
        self.declare_parameter("ping_on_start", True)
        self.declare_parameter("set_wheel_mode_on_start", True)
        self.declare_parameter("stop_on_shutdown", True)

        self.service_name = self.get_parameter("service_name").value
        self.serial_port = self.get_parameter("serial_port").value
        self.baudrate = int(self.get_parameter("baudrate").value)
        self.motor_ids = self._read_integer_array_parameter("motor_ids")
        self.acceleration = int(self.get_parameter("acceleration").value)
        self.ping_on_start = bool(self.get_parameter("ping_on_start").value)
        self.set_wheel_mode_on_start = bool(
            self.get_parameter("set_wheel_mode_on_start").value
        )
        self.stop_on_shutdown = bool(self.get_parameter("stop_on_shutdown").value)

        if len(self.motor_ids) != 3:
            raise ValueError("motor_ids must contain exactly three motor IDs")

        self.port_handler = PortHandler(self.serial_port)
        if not self.port_handler.openPort():
            raise IOError(f"Failed to open serial port {self.serial_port}")
        if not self.port_handler.setBaudRate(self.baudrate):
            self.port_handler.closePort()
            raise IOError(f"Failed to set baudrate {self.baudrate} on {self.serial_port}")

        self.motor_bus = sms_sts(self.port_handler)
        self.get_logger().info(
            f"Connected to STS3215 bus on {self.serial_port} at {self.baudrate} baud"
        )

        if self.ping_on_start:
            self._ping_motors()

        if self.set_wheel_mode_on_start:
            self._ensure_wheel_mode_for_all()

        self.service = self.create_service(
            WheelVel,
            self.service_name,
            self.handle_wheel_velocity,
        )
        self.get_logger().info(f"Service '{self.service_name}' ready")

    def destroy_node(self) -> None:
        if getattr(self, "stop_on_shutdown", False):
            try:
                self._send_velocities({motor_id: 0 for motor_id in self.motor_ids})
            except Exception as exc:
                self.get_logger().warn(f"Failed to stop drivetrain on shutdown: {exc}")

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

    def _ping_motors(self) -> None:
        for motor_id in self.motor_ids:
            model_number, comm_result, error = self.motor_bus.ping(motor_id)
            if comm_result != COMM_SUCCESS:
                raise IOError(
                    f"Failed to ping motor {motor_id}; comm_result={comm_result}"
                )
            if error:
                raise IOError(f"Motor {motor_id} returned ping error={error}")
            self.get_logger().info(f"Motor {motor_id} responded, model={model_number}")
            
    def _ensure_wheel_mode_for_all(self) -> None:
        for motor_id in self.motor_ids:
            self._ensure_wheel_mode(motor_id)

    def _ensure_wheel_mode(self, motor_id: int) -> None:
        mode, comm_result, error = self.motor_bus.read1ByteTxRx(motor_id, ADDR_MODE)
        if comm_result != COMM_SUCCESS:
            raise IOError(
                f"Failed to read mode for motor {motor_id}; comm_result={comm_result}"
            )
        if error:
            raise IOError(f"Motor {motor_id} returned mode read error={error}")

        if mode != WHEEL_MODE:
            result = self.motor_bus.WheelMode(motor_id)
            self._check_write_result(result, motor_id, "WheelMode")

    def handle_wheel_velocity(self, request, response):
        requested_velocities = list(request.vel)

        if len(requested_velocities) != len(self.motor_ids):
            self.get_logger().error(
                f"Expected {len(self.motor_ids)} velocities, got "
                f"{len(requested_velocities)}"
            )
            response.complete = False
            return response

        try:
            targets = {
                motor_id: int(velocity)
                for motor_id, velocity in zip(self.motor_ids, requested_velocities)
            }
            self._send_velocities(targets)
            response.complete = True
        except Exception as exc:
            self.get_logger().error(f"Drivetrain velocity command failed: {exc}")
            response.complete = False

        return response

    def _send_velocities(self, velocities: Dict[int, int]) -> None:
        for motor_id, velocity in velocities.items():
            self._ensure_wheel_mode(motor_id)
            result = self.motor_bus.WriteSpec(
                motor_id,
                velocity,
                self.acceleration,
            )
            self._check_write_result(result, motor_id, "WriteSpec")

    def _check_write_result(self, result, motor_id: int, operation: str) -> None:
        if result is None:
            return
        if not isinstance(result, tuple):
            return
        if len(result) < 2:
            return

        comm_result, error = result[-2], result[-1]
        if comm_result != COMM_SUCCESS:
            raise IOError(
                f"{operation} failed for motor {motor_id}; comm_result={comm_result}"
            )
        if error:
            raise IOError(f"{operation} returned motor {motor_id} error={error}")


def main(args=None) -> None:
    rclpy.init(args=args)
    node = None

    try:
        node = DrivetrainVelocityService()
        rclpy.spin(node)
    finally:
        if node is not None:
            node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
