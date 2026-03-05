import time

from lerobot.robots.lekiwi.lekiwi import LeKiwiConfig, LeKiwi

cfg = LeKiwiConfig(port="/dev/ttyACM0", id="lekiwi", cameras={})
robot = LeKiwi(cfg)
robot.connect()

print("MOTORS:", list(robot.bus.motors.keys()))

# LeKiwi base wheels are continuous-rotation motors.
# For wheels you generally want VELOCITY control, not Goal_Position.
base = [m for m in robot.bus.motors.keys() if m.startswith("base_")]
print("BASE:", base)

# 1) Put wheels into velocity mode (best practice: torque off -> set mode -> torque on)
try:
    robot.bus.sync_write("Torque_Enable", {m: 0 for m in base})
except Exception as e:
    print("Torque disable failed (ok to ignore if unsupported):", e)

try:
    # Common Dynamixel convention: 1 = Velocity mode
    robot.bus.sync_write("Operating_Mode", {m: 1 for m in base})
    print("Set Operating_Mode=1 (velocity) on base motors")
except Exception as e:
    print("Operating_Mode sync_write failed (may be unsupported):", e)

try:
    robot.bus.sync_write("Torque_Enable", {m: 1 for m in base})
    print("Enabled torque on base motors")
except Exception as e:
    print("Torque enable sync_write failed:", e)
    # Fallback: some SerialMotorsBus.write signature is (item, motor_name, value)
    try:
        for m in base:
            robot.bus.write("Torque_Enable", m, 1)
        print("Enabled torque on base motors (fallback write)")
    except Exception as e2:
        print("Torque enable fallback write failed:", e2)

# 3) Spin left wheel for 1 second, then stop
try:
    robot.bus.sync_write("Goal_Velocity", {"base_left_wheel": -20000})
    time.sleep(3)
    robot.bus.sync_write("Goal_Velocity", {"base_left_wheel": 0})
    print("Sent Goal_Velocity to base_left_wheel")
except Exception as e:
    print("Goal_Velocity sync_write failed:", e)

# 4) Optional: read back something if available
try:
    vel = robot.bus.sync_read("Present_Velocity", ["base_left_wheel"])
    print("Present_Velocity:", vel)
except Exception as e:
    print("Present_Velocity read failed (may be unsupported):", e)