import math, os, sys, time
HERE = os.path.dirname(os.path.abspath(__file__)); WS = os.path.abspath(os.path.join(HERE, "..", "..", "src"))
sys.path.insert(0, os.path.join(HERE, "fakeros"))
for p in sorted(os.listdir(WS)): sys.path.insert(1, os.path.join(WS, p))
import fake_msgs; fake_msgs.install(os.path.join(WS, "mission_interfaces"))
import yaml, rclpy
from rclpy.node import PARAM_OVERRIDES, Node
cfg = yaml.safe_load(open(os.path.join(WS, "bc_bringup/config/mission.yaml")))
PARAM_OVERRIDES["flight_controller"] = {k: v for k, v in cfg["flight_controller"]["ros__parameters"].items()
                                        if k in ("goto_local_ned_mode","goto_body_mode","default_speed","default_acceptance_radius","guided_only","stream_rate_hz")}
rclpy.init()
from flight_controller.flight_controller_node import FlightController
from mavros_msgs.msg import State, ExtendedState
from geometry_msgs.msg import PoseStamped, TwistStamped
from sensor_msgs.msg import NavSatFix
from std_msgs.msg import Float64
from mission_interfaces.msg import VehicleState
fc = FlightController()
print("goto_local_ned_mode =", fc.get_parameter("goto_local_ned_mode").value, "| guided_only =", fc.get_parameter("guided_only").value)
n = Node("fake_mavros"); got = []
n.create_subscription(VehicleState, "/flight_controller/pose", got.append, 10)
pub = lambda t, topic: n.create_publisher(t, topic, 10)
st = State(connected=True, armed=False, mode="GUIDED", system_status=3); pub(State, "/mavros/state").publish(st)
fix = NavSatFix(latitude=13.0, longitude=80.2, altitude=10.0); fix.status.status = 0
pub(NavSatFix, "/mavros/global_position/global").publish(fix)
pub(Float64, "/mavros/global_position/rel_alt").publish(Float64(data=2.5))
pub(TwistStamped, "/mavros/local_position/velocity_local").publish(TwistStamped())
ps = PoseStamped(); ps.pose.position.x, ps.pose.position.y, ps.pose.position.z = 1.0, 2.0, 2.5   # ENU: east 1, north 2
yaw_enu = math.radians(0.0)  # facing east in ENU -> heading 90 deg
ps.pose.orientation.z, ps.pose.orientation.w = math.sin(yaw_enu/2), math.cos(yaw_enu/2)
time.sleep(0.2); pub(PoseStamped, "/mavros/local_position/pose").publish(ps); time.sleep(0.5)
m = got[-1]
print(f"VehicleState: valid={m.valid} ready={m.ready} controller={m.controller} mode={m.mode} "
      f"x(N)={m.x:.2f} y(E)={m.y:.2f} z={m.z:.2f} heading={math.degrees(m.heading):.1f} alt_rel={m.alt_rel:.2f}")
assert m.valid and m.ready and abs(m.x-2)<1e-6 and abs(m.y-1)<1e-6 and abs(m.z+2.5)<1e-6 and abs(math.degrees(m.heading)-90)<1e-4 and abs(m.alt_rel-2.5)<1e-6
from rclpy import _core; print("callback exceptions:", len(_core.ERRORS)); [print(t) for _, t in _core.ERRORS]
print(f"roll={m.roll:.3f} pitch={m.pitch:.3f} xy_global={m.xy_global}")
# streamed setpoint: refused before GUIDED is engaged by a Takeoff, accepted after
from mission_interfaces.msg import PositionSetpoint
sp = n.create_publisher(PositionSetpoint, "/flight_controller/setpoint", 10)
sp.publish(PositionSetpoint(x=5.0, y=1.0, z=-3.0, yaw=0.5)); time.sleep(0.2)
assert fc.sp_mode is None, "setpoint must be ignored before take-off"
fc.guided_owned = True
sp.publish(PositionSetpoint(x=5.0, y=1.0, z=-3.0, yaw=0.5)); time.sleep(0.2)
assert fc.sp_mode == "position" and abs(fc.sp_position[0] - 5.0) < 1e-6 and abs(fc.sp_yaw - 0.5) < 1e-6
time.sleep(0.8)   # stream stops -> hold where the vehicle is
assert not fc.streaming and abs(fc.sp_position[0] - 2.0) < 1e-6, fc.sp_position
print("setpoint stream: ignored before take-off, followed, holds on timeout")
print("REAL flight_controller pose publisher OK"); rclpy.shutdown(); os._exit(0)
