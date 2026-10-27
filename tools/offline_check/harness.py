"""End-to-end bench run of the banner-corridor workspace without ROS installed.

    python3 harness.py <scenario> <outdir>
    scenario: nominal | ref_qr_far | no_green | no_blue | no_twin | red
    QR_SEARCH=target_search (default: geofenced search + red-zone avoidance, delivery_zone.sim.txt) | lawnmower

Loads fakeros (rclpy / py_trees / message stand-ins), the workspace packages and bc_bringup/config/mission.yaml,
starts every node of `mission.launch.py bench:=true camera:=sim` in one process and runs mission_tree.main().
"""
import math
import os
import sys
import threading
import time

HERE = os.path.dirname(os.path.abspath(__file__))
WS = os.path.abspath(os.path.join(HERE, "..", "..", "src"))
sys.path.insert(0, os.path.join(HERE, "fakeros"))
for pkg in sorted(os.listdir(WS)):
    sys.path.insert(1, os.path.join(WS, pkg))

import fake_msgs  # noqa: E402

fake_msgs.install(os.path.join(WS, "mission_interfaces"))

import cv2  # noqa: E402
import numpy as np  # noqa: E402
import yaml  # noqa: E402

import rclpy  # noqa: E402
from rclpy import _core  # noqa: E402
from rclpy.node import PARAM_OVERRIDES, Node  # noqa: E402

scenario = sys.argv[1] if len(sys.argv) > 1 else "nominal"
out = sys.argv[2] if len(sys.argv) > 2 else os.path.join(HERE, "run_" + scenario)
os.makedirs(out, exist_ok=True)
_core.LOG_FILE = open(os.path.join(out, "log.txt"), "w")

# ---- parameters exactly as the launch file passes them (bench:=true camera:=sim)
cfg = yaml.safe_load(open(os.path.join(WS, "bc_bringup", "config", "mission.yaml")))
for key, section in cfg.items():
    PARAM_OVERRIDES[key.lstrip("/") if key != "/**" else "/**"] = dict(section["ros__parameters"])
PARAM_OVERRIDES["flight_controller"]["spin_motors"] = False
PARAM_OVERRIDES["mission_hud"]["show_window"] = False
PARAM_OVERRIDES["qr_detector"]["reference_save_path"] = os.path.join(out, "reference_qr_memorized.png")
QR_SEARCH = os.environ.get("QR_SEARCH", "target_search")
PARAM_OVERRIDES["payload_drop"]["simulate"] = True        # bench: no MAVROS (as mission.launch.py)
PARAM_OVERRIDES["survey_capture"]["save_dir"] = os.path.join(out, "geotag")
PARAM_OVERRIDES["mission_tree"]["qr_search"] = QR_SEARCH
PARAM_OVERRIDES["mission_tree"]["geofence_file"] = os.path.join(WS, "bc_bringup", "config", "delivery_zone.sim.txt")

# ---- scenario: edit the synthetic field
from bench_flight_controller import sim_world  # noqa: E402

orig = sim_world.default_objects


def scenario_objects(*args, **kwargs):
    objs = orig(*args, **kwargs)
    if scenario == "ref_qr_far":      # reference QR 2.6 m beyond the surge-1 point: only the search finds it
        for o in objs:
            if o.name.startswith("qr:") and abs(o.north - 2.0) < 0.1:
                o.north += 2.6
    elif scenario == "no_green":
        objs = [o for o in objs if o.name != "green_banner"]
    elif scenario == "no_blue":
        objs = [o for o in objs if o.name != "blue_banner"]
    elif scenario == "no_twin":       # no QR matches: best candidate (target_search) / stage 10 skipped
        objs = [o for o in objs if not (o.name == "qr:AEROTHON-7" and o.north > 10)]
    elif scenario == "red":           # 4 x 4 m red zone on the first search rows, twin 4 m clear of it
        objs.append(sim_world.WorldObject("red_zone", np.full((40, 40, 3), (30, 20, 215), np.uint8),
                                          27.0, -17.0, 4.0, 4.0, 0.0))
    return objs


sim_world.default_objects = scenario_objects

# ---- nodes of mission.launch.py bench:=true camera:=sim
rclpy.init()
from bench_flight_controller.bench_controller_node import BenchFlightController  # noqa: E402
from bench_flight_controller.sim_camera_node import SimCamera  # noqa: E402
from banner_detector.banner_detector_node import BannerDetectorNode  # noqa: E402
from qr_detector.qr_detector_node import QrDetectorNode  # noqa: E402
from banner_search.banner_search_node import BannerSearch  # noqa: E402
from banner_align.banner_align_node import BannerAlign  # noqa: E402
from corridor_navigator.corridor_navigator_node import CorridorNavigator  # noqa: E402
from target_search.lawnmower_search_node import LawnmowerSearchNode  # noqa: E402
from target_search.target_search_node import TargetSearch  # noqa: E402
from red_zone_detector.red_zone_detector_node import RedZoneDetector  # noqa: E402
from target_navigator.target_navigator_node import TargetNavigator  # noqa: E402
from payload_drop.payload_drop_node import PayloadDropController  # noqa: E402
from payload_drop.survey_capture_node import SurveyAndImageCapture  # noqa: E402
from qr_centering.qr_centering_node import QrCentering  # noqa: E402
from mission_hud.hud_node import HudNode  # noqa: E402
from mission_management import mission_tree  # noqa: E402
from mission_interfaces.msg import MissionStatus, VehicleState  # noqa: E402
from sensor_msgs.msg import Image  # noqa: E402
from bc_common.image import imgmsg_to_bgr  # noqa: E402

nodes = [cls() for cls in (BenchFlightController, SimCamera, BannerDetectorNode, QrDetectorNode, BannerSearch,
                           BannerAlign, CorridorNavigator, RedZoneDetector, TargetSearch, LawnmowerSearchNode,
                           TargetNavigator, PayloadDropController, SurveyAndImageCapture, QrCentering, HudNode)]

# ---- recorder
rec = Node("recorder")
traj, stages, traj_csv = [], [], []
video = {"w": None, "last": 0.0}
lock = threading.Lock()


current_stage = [""]


def pose_cb(m):
    with lock:
        traj.append((time.monotonic(), m.x, m.y, m.z, m.heading, m.armed))
        traj_csv.append((time.monotonic() - _core.T0, current_stage[0], m.x, m.y, m.z, m.heading))


def status_cb(m):
    with lock:
        current_stage[0] = m.stage
        if not stages or stages[-1][1] != m.stage:
            stages.append((time.monotonic() - _core.T0, m.stage))


def hud_cb(m):
    now = time.monotonic()
    if now - video["last"] < 0.25:
        return
    video["last"] = now
    img = imgmsg_to_bgr(m)
    if video["w"] is None:
        video["w"] = cv2.VideoWriter(os.path.join(out, "hud.mp4"), cv2.VideoWriter_fourcc(*"mp4v"), 16,
                                     (img.shape[1], img.shape[0]))
    video["w"].write(img)


rec.create_subscription(VehicleState, "/flight_controller/pose", pose_cb, 10)
rec.create_subscription(MissionStatus, "/mission/status", status_cb, 10)
rec.create_subscription(Image, "/hud/image", hud_cb, 2)

# ---- the mission tree, through its real main()
tree_thread = threading.Thread(target=mission_tree.main, daemon=True)
tree_thread.start()

deadline = time.monotonic() + float(os.environ.get("HARNESS_TIMEOUT", "900"))
outcome = "TIMEOUT"
log_path = os.path.join(out, "log.txt")
while time.monotonic() < deadline:
    time.sleep(1.0)
    text = open(log_path).read()
    if "MISSION COMPLETED SUCCESSFULLY" in text:
        outcome = "COMPLETED"
        break
    if "MISSION ABORTED" in text:
        outcome = "ABORTED (returned home and landed)"
        break
    if "MISSION FAILED" in text:
        outcome = "FAILED"
        break
    if not tree_thread.is_alive():
        outcome = "TREE THREAD DIED"
        break
time.sleep(1.0)
rclpy.shutdown()
time.sleep(0.5)
if video["w"] is not None:
    video["w"].release()

# ---- report
with lock:
    tr = list(traj)
    st = list(stages)
with open(os.path.join(out, "summary.txt"), "w") as f:
    f.write(f"scenario: {scenario} (qr_search {QR_SEARCH})\noutcome: {outcome}\nduration: {time.monotonic() - _core.T0:.1f} s\n")
    f.write(f"callback exceptions: {len(_core.ERRORS)}\n")
    for where, tb in _core.ERRORS:
        f.write(f"--- {where}\n{tb}\n")
    if tr:
        _, x, y, z, h, armed = tr[-1]
        f.write(f"final pose: N={x:+.2f} E={y:+.2f} alt={-z:.2f} heading={math.degrees(h):+.1f} armed={armed}\n")
        f.write(f"max altitude: {max(-p[3] for p in tr):.2f} m\n")
    reds = [o for o in sim_world.default_objects() if o.name == "red_zone"]
    if reds and tr:
        def red_dist(x, y):
            return min(math.hypot(max(abs(x - o.north) - o.length / 2, 0.0), max(abs(y - o.east) - o.width / 2, 0.0))
                       for o in reds)
        airborne = [p for p in tr if -p[3] > 0.3]
        closest = min(airborne, key=lambda p: red_dist(p[1], p[2]))
        f.write(f"closest approach to red: {red_dist(closest[1], closest[2]):.2f} m "
                f"(at N={closest[1]:+.2f} E={closest[2]:+.2f}, alt {-closest[3]:.1f} m)\n")
    f.write("\nstage timeline (s):\n")
    for t, s in st:
        f.write(f"  {t:7.1f}  {s}\n")
print(open(os.path.join(out, "summary.txt")).read())

with open(os.path.join(out, "traj.csv"), "w") as f:
    f.write("t,stage,north,east,down,heading\n")
    for row in traj_csv[::3]:
        f.write(f"{row[0]:.2f},{row[1]},{row[2]:.3f},{row[3]:.3f},{row[4]:.3f},{row[5]:.4f}\n")

# trajectory plot over the synthetic field (top-down, 25 px/m)
world = sim_world.SimWorld()
S, n0, n1, e0, e1 = 25, -4.0, 36.0, -24.0, 6.0
W, H = int((e1 - e0) * S), int((n1 - n0) * S)
canvas = np.full((H, W, 3), (95, 105, 110), np.uint8)
for o in world.objects:
    c, s_ = math.cos(o.heading), math.sin(o.heading)
    pts = []
    for a, b in ((-1, -1), (1, -1), (1, 1), (-1, 1)):
        dn = a * o.length / 2 * c - b * o.width / 2 * s_
        de = a * o.length / 2 * s_ + b * o.width / 2 * c
        pts.append(((o.east + de - e0) * S, (n1 - (o.north + dn)) * S))
    color = (64, 177, 0) if o.name == "green_banner" else (255, 0, 0) if o.name == "blue_banner" else \
        (170, 170, 170) if o.name == "wall" else (30, 20, 215) if o.name == "red_zone" else (255, 255, 255)
    cv2.fillPoly(canvas, [np.int32(pts)], color)
    if o.name.startswith("qr:"):
        cv2.putText(canvas, o.name[3:], (int((o.east - e0) * S) - 40, int((n1 - o.north) * S) - 14),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.4, (255, 255, 255), 1)
prev = None
for _, x, y, z, h, armed in tr[::5]:
    p = (int((y - e0) * S), int((n1 - x) * S))
    alt = -z
    col = (0, 255, 255) if alt > 4.0 else (0, 165, 255) if alt > 2.5 else (0, 0, 255)
    if prev is not None:
        cv2.line(canvas, prev, p, col, 2)
    prev = p
cv2.circle(canvas, (int((0 - e0) * S), int((n1 - 0) * S)), 10, (255, 255, 255), 2)
cv2.putText(canvas, f"{scenario}: {outcome}", (10, 24), cv2.FONT_HERSHEY_SIMPLEX, 0.7, (255, 255, 255), 2)
cv2.putText(canvas, "path: yellow >4 m, orange 2.5-4 m, red <2.5 m   grid 5 m", (10, 48),
            cv2.FONT_HERSHEY_SIMPLEX, 0.45, (255, 255, 255), 1)
for gn in range(0, 36, 5):
    cv2.line(canvas, (0, int((n1 - gn) * S)), (12, int((n1 - gn) * S)), (255, 255, 255), 1)
cv2.imwrite(os.path.join(out, "trajectory.png"), canvas)
os._exit(0 if outcome == "COMPLETED" else 1)
