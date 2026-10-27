# banner_corridor_ws: AeroTHON 2026 banner-corridor + QR mission as ROS 2 nodes

`blue_green_qr_fixed.py` (one 2,424-line script) split into ROS 2 nodes. Each node does one job. They
talk through actions and topics, and a py_trees `mission_tree` runs the stages in order, with the
script's fallbacks.

## Packages

| Package | Node / tool | From the script | Interface |
|---|---|---|---|
| `mission_interfaces` | – | – | all actions / messages / services below |
| `bc_common` | (library) | §1 geometry, §2 `SiyiStreamWorker` | GoTo client, pose listener, message cache |
| `flight_controller` | `flight_controller_node` | §6 `DroneController` (real flight) | MAVROS controller, `/flight_controller/pose` |
| `bench_flight_controller` | `bench_controller_node` | `--bench-sim`, `--spin-motors` | same node name, actions and topics as `flight_controller` |
| | `sim_camera_node` | – | synthetic downward camera for bench runs without hardware |
| `siyi_camera` | `rtsp_camera_node` | §2 RTSP worker | `/camera/image_raw` |
| `banner_detector` | `banner_detector_node` | §3 OCR worker, §4 `BannerDetector` | `/perception/banner`, `~/set_color` |
| | `vision_test` | §8 `--vision-test` | standalone tuning tool (no ROS graph) |
| `qr_detector` | `qr_detector_node` | §5 QR engine, stage 2 capture, `find_target_qr` | `/perception/qr`, `~/capture_reference` |
| `banner_search` | `banner_search_node` | `search_banner_sway` (stages 4, 11) | `/search_banner` |
| `banner_align` | `banner_align_node` | `align_on_banner` / `center_over_banner` (stages 5, 11) | `/align_banner` |
| `corridor_navigator` | `corridor_navigator_node` | `surge_corridor` (stages 6-7, 11) | `/traverse_corridor` |
| `red_zone_detector` | `red_zone_detector_node` | (Shiva007-RAndom red_zone_node) | `/perception/red_zone` |
| `target_search` | `target_search_node` | stage 9 geofenced search, red-zone avoidance (suas_aer + Shiva007-RAndom) | `/search_target`, `/safe_goto`, `/perception/red_map` |
| | `lawnmower_search_node` | stage 9 lawnmower (script) | `/lawnmower_search` |
| `target_navigator` | `target_navigator_node` | stage 9b: fly to the found QR's lat/lon (red-aware) | `/navigate_to_target` |
| `payload_drop` | `payload_drop_node` | stage 10b drop (airdrop_controller structure) | `/payload_drop`, `/drop_status` |
| | `survey_capture_node` | geotagged frames during the search (airdrop_survey) | `/survey_capture/set_active` |
| `qr_centering` | `qr_centering_node` | stage 10 centring + 15 s hold | `/center_on_qr` |
| `mission_hud` | `hud_node` | `update_hud` | `/hud/image` (+ optional OpenCV window) |
| `mission_management` | `mission_tree` | `run()` | py_trees tree, `/mission/status` |
| `bc_bringup` | `drone.launch.py`, `sim_mission.launch.py`, `mission.launch.py`, `config/mission.yaml` | CLI arguments | launch + field parameters |
| `bc_sim` | `sitl.launch.py`, `gz_camera_relay`, Gazebo world + models | – | Gazebo + ArduCopter SITL + MAVProxy + MAVROS |
| `red_avoidance` | (library) | Shiva007-RAndom avoidance.py | RedMap, Navigator/Detour, zone frame |

Stage 9 (`qr_search`): `target_search` (default) sweeps the delivery-zone geofence and detours round every
red zone the camera sees; `lawnmower` is the script's serpentine without red avoidance. There is one red
zone and it is inside the delivery zone, so `red_zone_detector` starts idle and the tree switches it on
(`/red_zone_detector/set_active`) when the target search starts and off after the payload drop (or when
stages 9-10 end early). Red avoidance (search detours, the navigator's `/safe_goto`, qr_centering's 1 m
`centre_clearance`) only acts in that window; every leg after it (blue search start, home, abort return)
is a plain GoTo. With `lawnmower` red detection stays off.

Only `flight_controller` (or the bench stand-in) commands the autopilot. Every other node moves the
drone with `GoTo` goals and reads the drone pose from `/flight_controller/pose` (`VehicleState`).

## Mission

Heights are metres above the take-off pad: the pad's z is recorded before take-off and every target
is `pad z - height`. Transit, both banner searches and the QR search are at `alt` (5 m); both corridors
at `corridor_alt` (3 m). `VehicleState.alt_rel` (used by the detectors for metres per pixel) is
measured from the same pad z.

```
STAGE 1   take-off to 5 m, record the take-off frame (position + heading)
STAGE 2   surge 2 m, capture the reference QR from the camera, NO timeout: hover 10 s, then growing
          squares (1, 2, 3 m half-size, 1.5 s per corner, repeated) round that point until a QR is
          seen; "still searching" logged every 10 s (only a failed capture skips stages 9-10)
STAGE 3   surge 2 m
STAGE 4   sway LEFT up to 20 m at 0.5 m/s, detecting the GREEN banner on every frame
          (not found -> fly home at 5 m and land)
STAGE 5   brake, fly onto the banner, PBVS-centre it, measure the corridor heading and sway x
STAGE 6-7 descend to 3 m over the banner, surge 10 m through the corridor, climb straight up to 5 m
STAGE 8   move left (19 - x) m (1 m from the 20 m wall), 1 m forward, at 5 m
STAGE 9   qr_search target_search (default): sweep the delivery zone (geofence_file) at 5 m, mapping and
          avoiding red zones; stop at a QR matched twice and decoded once as the reference
          (no match -> best-scoring QR seen, outside the red)
          qr_search lawnmower: 5 rows x 18 m along the corridor heading, 4 m apart stepping right;
          stop at the first matching QR (no match -> stage 10 skipped)
          target_search also: a geotagged SIYI frame every 3 m during the search (survey_capture), then
          target_navigator flies to the chosen QR's lat/lon round the red
STAGE 10  centre over the QR (the matched one, or any QR for the best candidate), 15 s hover hold
          with 1 Hz vision nudges, never closer than 1 m to mapped red
          target_search also: payload drop, SERVO9 1900 us -> 2 s -> 1100 us (DO_SET_SERVO, GUIDED)
STAGE 11  fly to 11 m from the green banner along the corridor (1 m past its exit) at 5 m,
          yaw 180 deg to face the corridors, then exactly as stages 4-7 for the BLUE banner:
          sway LEFT up to 20 m, align, descend to 3 m, surge 10 m, climb to 5 m
          (not found -> fly home at 5 m and land)
STAGE 12  fly to the pad at 5 m, 2 m low hover, land
```

Any failure after the green banner search (a GoTo that fails, a node that aborts) also ends in
"climb to transit altitude, fly home, land".

### Payload drop and geotagged survey (target_search only, `payload_drop: true`)

- **survey_capture** (`payload_drop` package, capture + EXIF of airdrop_survey): while target_search runs,
  every `capture_spacing` m (3.0) it saves the newest `/camera/image_raw` frame (the SIYI RTSP stream held
  by rtsp_camera_node) as `~/bc_geotag/<date_time>/frameNNNNNN.jpg` with EXIF GPS (lat/lon/alt/direction)
  and UserComment {Pitch, Roll, Yaw}, plus `index.csv`. GPS from `/mavros/global_position/global`, else
  the local pose + EKF origin. Uses piexif like airdrop_survey when installed, else Pillow (same tags).
- **target_navigator**: target_search reports the QR's lat/lon without flying there
  (`skip_fly_to_target`); the navigator converts the waypoint to local NED and flies there with
  `/safe_goto` (detours round mapped red), checking arrival within 1 m.
- **qr_centering**: unchanged (centring + 15 s hold). `align_duration:=0` drops right after centring.
- **payload_drop** (structure of airdrop_controller: `_call_service`, `create_servo_command`,
  `/drop_status`, `/task_status`, `/task_command "payload_drop"` for a manual test): stays in GUIDED and
  sends `MAV_CMD_DO_SET_SERVO` through `/mavros/cmd/command`: `drop_channel` (9) = `open_pwm` (1900),
  wait `drop_interval` (2.0 s), = `close_pwm` (1100), each checked on `/mavros/rc/out`. The close command
  is sent even if the step is cancelled. Also drops over target_search's best candidate. A failed drop is
  logged and the mission continues. **On the Cube set `SERVO9_FUNCTION = 0`** (Disabled), otherwise
  ArduPilot ignores DO_SET_SERVO on that output (bc_sim's `sitl.parm` does this for SITL). On the bench
  without MAVROS the drop is simulated (logged).
- `payload_drop:=false` restores the previous flow (the search flies to the QR, no drop).
  `qr_search:=lawnmower` is unchanged: no geotagging, no navigator, no drop.

Manual test of the servo on the bench (props off): `ros2 topic pub --once /task_command std_msgs/String "{data: payload_drop}"`.

### Banner detection (green and blue identical)

- Hue window centres: green 71 (#00B140), blue **112**. Pure #0000FF is hue 120 on paper, but a
  printed/filmed blue banner reads ~104-118; a window centred on 120 cut the real banner at its edge,
  so the mask fragmented and failed the ratio/fill checks. Tune with `vision_test --color blue`: it
  shows each region's measured hue.
- OCR ('AeroTHON' + '2026'): one crop per frame, round-robin over the 3 most banner-like elongated
  regions (submitting every region left only the smallest one read). A crop with text that does not
  match is retried rotated 180 deg.
- The tracker and any old OCR match are cleared before every search.
- RapidOCR needs `shapely` in the Python the ROS nodes run with (`/usr/bin/python3`): without it the
  detector logs "RapidOCR unavailable" and runs shape-only. `sudo apt install python3-shapely`.

## Running

```bash
cd banner_corridor_ws && colcon build --symlink-install && source install/setup.bash
```

### Real drone: `drone.launch.py`

Cube Orange+ on the Pixhawk's USB port (MAVROS `fcu_url:=/dev/ttyACM0:115200`), SIYI A8 mini over RTSP.

```bash
ros2 launch bc_bringup drone.launch.py geofence_file:=/home/pi/delivery_zone.txt
ros2 launch bc_bringup drone.launch.py geofence_file:=... fcu_url:=/dev/serial/by-id/usb-CubePilot_CubeOrange+_0-if00:115200
ros2 launch bc_bringup drone.launch.py qr_search:=lawnmower                    # script's lawnmower, no geofence
ros2 launch bc_bringup drone.launch.py geofence_file:=... gcs_url:=udp://@192.168.1.10:14550 show_window:=true
```

It warns if the USB device is missing or not accessible (dialout group). With the default
`qr_search:=target_search` it refuses to start without a geofence file.

### Simulation: `sitl.launch.py` + `sim_mission.launch.py`

```bash
ros2 launch bc_sim sitl.launch.py                 # terminal 1: simulator (keep it running)
ros2 launch bc_bringup sim_mission.launch.py      # terminal 2: the mission
ros2 launch bc_bringup sim_mission.launch.py with_sitl:=true    # or both from one terminal
```

`sitl.launch.py` starts Gazebo Harmonic with `bc_sim/worlds/aerothon_mission2_ardupilot.sdf`, ArduCopter
SITL (Copter-4.5, JSON backend, lock-step with ardupilot_gazebo's plugin) with its home at the world origin,
MAVProxy (tcp 5760 -> UDP 14550 for QGroundControl, UDP 14555 for MAVROS), MAVROS on `udp://:14555@`, and the
downward camera (ros_gz_bridge + `gz_camera_relay` -> `/camera/image_raw`). Arguments: `gui:=false`
(headless), `console:=true` (MAVProxy console + map), `wipe:=false` (keep SITL parameters), `mavros:=false`,
`gcs_out:=udp:<ip>:14550`, `ardupilot_dir:=`, `ardupilot_gazebo:=`.

`sim_mission.launch.py` is the same node set as the real drone, but without MAVROS (sitl.launch.py runs it)
and without the SIYI node, with `bc_sim/config/sim_mission.yaml` on top of `mission.yaml` (fixed camera,
latency) and the Gazebo room as the geofence (`bc_sim/config/delivery_zone.gazebo.txt`). Every
mission.launch.py argument works (`qr_search:=lawnmower`, `alt:=`, `hud:=false`, ...). SITL needs ~20-40 s
for GPS + EKF after start; the tree waits for `ready`. To fly again, restart both launches (fresh world).

The world (repo `aerothon_mission2.sdf`, v6) with these changes: the overhead banners are removed; the
green entry banner (#00B140) lies on the ground across the forward lane just before its entrance, centre
(2.8, 21.75); the blue exit banner (#0000FF) lies across the return lane just past its room-side end,
centre (13.2, 18.25), turned 180 deg; both 11.5 x 1 ft with a 1-inch white border and "AEROTHON 2026"
(`bc_sim/scripts/make_banner_textures.py`). The drone (`iris_down_cam`: ardupilot_gazebo's iris + a fixed
downward 1280x720, 1.22 rad camera, image top = forward) is spawned on the pad facing the corridor.
Expected flight: surge to X 4, sway left onto the green banner, forward lane at 3 m, stage 8 to (13.8, 39),
target search of the room round the red zone to qr_b (the twin of the start QR), blue search from
(13.8, 21.75) facing back, sway left onto the blue banner, return lane at 3 m over the boxes, home, land.

### Bench and tools: `mission.launch.py`

```bash
# bench (like --bench-sim): simulated flight, real SIYI camera (physical size check off)
ros2 launch bc_bringup mission.launch.py bench:=true qr_search:=lawnmower
# bench with real motors spinning in GUIDED_NOGPS (like --spin-motors): PROPELLERS OFF
ros2 launch bc_bringup mission.launch.py bench:=true spin_motors:=true thrust:=0.20 qr_search:=lawnmower
# no hardware at all: simulated flight + synthetic field (hud:=false saves CPU on the Pi)
ros2 launch bc_bringup mission.launch.py bench:=true camera:=sim hud:=false \
    geofence_file:=$(ros2 pkg prefix bc_bringup)/share/bc_bringup/config/delivery_zone.sim.txt

# field tuning tool (like --vision-test), straight from the camera, no ROS graph
ros2 run banner_detector vision_test --color green          # 'm' toggles the mask, 'q' quits
ros2 run banner_detector vision_test --color blue --green-h-tol 12 --camera-src 0

# HUD
ros2 run rqt_image_view rqt_image_view /hud/image
```

Run single steps by hand with `tree:=false`, e.g.
`ros2 action send_goal /search_banner mission_interfaces/action/SearchBanner "{color: green, ...}"`.

### Arguments

Every parameter in `bc_bringup/config/mission.yaml` is also a launch argument, under the script's
option names, so each run can change them on the command line:

```bash
ros2 launch bc_bringup mission.launch.py surge1:=2.0 surge2:=2.0 alt:=5.0 corridor_alt:=3.0 \
    max_sway:=20 blue_max_sway:=20 corridor_surge:=10 return_exit_gap:=1.0 thrust:=0.2 blue_h_center:=110
ros2 launch bc_bringup mission.launch.py --show-args     # the full list with the params file's values
```

An argument left empty keeps the params file's value. Names used by several nodes carry the node
name: `qr_detector_match_thresh`, `banner_align_servo_tolerance`, `flight_controller_rate_hz`,
`sim_camera_rate_hz`, ... For a set of field values, copy `mission.yaml` and pass `params_file:=`.

Synthetic field (`camera:=sim`), `sim_camera` arguments: `green_sway` (m left of the take-off line to the
green ground board), `green_forward`, `corridor_length` (10), `corridor_gap`, `wall_height` (3.8),
`arch_height` (4.0: the drone passes under it at 3 m, not at 5 m), `board_offset`, `field_yaw_deg`.
Both colours have the spec's pair of boards (arch 11.5 x 1.5 ft at `arch_height`, ground 11.5 x 1 ft just
outside the arch), 1-inch white border; the blue pair is at the far end, readable after the 180 deg yaw.

## Verification (ROS 2 Jazzy on the Pi 5, 2026-10-27)

- `colcon build` (17 packages) and `colcon test`: 70 tests, 0 failures. New tests: a filmed blue
  (hue 102) is detected with the 112 centre and missed with the old 120 centre; lawnmower waypoints;
  blue search start / left sway direction.
- Full bench mission, real ROS graph (`bench:=true camera:=sim`), MISSION COMPLETED SUCCESSFULLY:

  | Stage | Result | Height |
  |---|---|---|
  | 1-3 take-off, surges, reference QR | 'AEROTHON-7' captured | 5.00 m |
  | 4-5 green sway + alignment | banner N=+4.31 E=-7.60 (true -7.5), heading 0.0 deg measured, lock | 5.00 m |
  | 6-7 green corridor | surge N 4.31 -> 14.28, then vertical climb at the exit | 3.00-3.08 m, climb at the exit |
  | 8 wall shift | 19 - 7.60 = 11.40 m left -> E=-19.00 | 5.00 m |
  | 9-10 lawnmower, centring, 15 s hold | twin matched at N=+24.06 E=-11.30 (true 24.0, -11.3), lock 11 px | 5.00 m |
  | 11 blue | start 11 m from the green banner, yaw 180 deg, sway left 4.3 m, banner N=+14.30 E=-3.40 (true 14.3, -3.5), heading 180.0 deg measured, lock | 5.00 m |
  | 11 return corridor | surge N 14.30 -> 4.33, vertical climb at the exit | 3.00-3.09 m |
  | 12 | home, 2 m low hover, landed on the pad (0.01, 0.00) | |

  On the Pi the synthetic camera is slow (it renders every frame in Python next to 11 other nodes):
  the bench run above used `sim_camera` 960x540 at 5 Hz, bench pose at 20 Hz and `hud:=false`. At the
  defaults (1280x720 at 15 Hz, 50 Hz pose) the detector got a frame only every 1-3 s and the 3-frame
  persistence never completed. The real SIYI stream does not have this problem.

Not tested here: MAVROS / SITL, the SIYI camera under real light, RapidOCR on this Pi (see below),
the `spin_motors` calls, real flight. Suggested order: `vision_test` on the real banners (blue
especially), `bench:=true` with the real camera, `spin_motors:=true` (props off), SITL / tethered.

### Simulation launch files, world and red-zone integration (offline, 2026-10-27)

Nothing was installed for this (no ROS / Gazebo / ArduPilot in the build sandbox); checked with the
offline tools in `tools/offline_check`:

- Unit tests: 66 passed (new: an undecoded decoy that passes the QR grid threshold is not accepted;
  bc_sim world / models / geofence / SITL home consistency).
- Full bench missions through the real nodes and tree (`harness.py`), all MISSION COMPLETED, landed on the pad:
  `nominal` with target_search (twin 'AEROTHON-7' at N=+23.83 E=-11.33, true 24.0/-11.3; a decoy grid
  match on the first row was not accepted), `red` (detour round a 4 x 4 m red zone, closest 2.65 m with a
  2 m margin, twin found), `nominal` with `qr_search:=lawnmower`.
- Launch files expanded with a stub of the launch API: drone / sim_mission / sitl / mission produce the
  expected nodes, parameters and processes; missing geofence, bad `qr_search` and missing files are refused.
- World: every model URI and texture resolves, banners at the planned places; the ground banners'
  textures pass the banner detector (synthetic top-down render at 5 m and 3 m, green and blue), the
  Gazebo ground (hue 50) is outside the green window, the repo's QR tiles decode at 5 m.

Not run here: Gazebo, ArduCopter SITL, MAVProxy, MAVROS, i.e. the simulation itself. First things to
look at on the PC: the camera image (`ros2 run rqt_image_view rqt_image_view /camera/image_raw`: top of the
image = drone forward), the banner hue in Gazebo's lighting (`vision_test` on a saved frame), and that
flight_controller reports ready after the SITL GPS fix.

### Payload drop, navigator, survey capture (offline, 2026-10-27)

73 unit tests pass (new: geotag EXIF written and read back, DMS conversion, capture spacing, the two-PWM
sequence incl. close-on-cancel, navigator waypoint conversion vs target_search, search hand-over without
flying). Bench missions through the real nodes (`harness.py`), all completed and landed: `nominal`
(17 geotagged frames, navigator 0.22 m from the twin, centred, drop SERVO9 1900 -> 2.0 s -> 1100),
`red` (detour, drop), `no_twin` (best candidate, navigator 16.6 m, drop), `lawnmower` (no capture, no
drop, as before). Not run: the real DO_SET_SERVO through MAVROS / SITL.

## Installation

See `INSTALL.md`: `./install.sh` (PC with simulation) or `./install.sh --no-sim` (the Pi).
# Pipeline
