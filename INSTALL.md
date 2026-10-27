# Installation

Ubuntu 24.04 (noble) with ROS 2 Jazzy already installed. One script does everything:

```bash
cd banner_corridor_ws
chmod +x install.sh
./install.sh            # PC: drone stack + simulation (Gazebo Harmonic, ArduCopter SITL 4.5, MAVProxy)
./install.sh --no-sim   # Raspberry Pi 5 on the drone: no simulator
```

Options: `--with-ocr` (RapidOCR banner text check), `--with-mavproxy-gui` (MAVProxy console/map, builds
wxPython: ~30 min), `--ardupilot-branch=Copter-4.5`, `--ardupilot-dir=~/ardupilot`,
`--ardupilot-gazebo-dir=~/ardupilot_gazebo`, `--no-build`, `--no-test`, `--no-bashrc`. Safe to run again.

## What it installs

| Part | What | Where / how |
|---|---|---|
| ROS packages | MAVROS (+ extras, msgs), GeographicLib datasets, py_trees, py_trees_ros, std_srvs, geographic_msgs, rqt_image_view | apt `ros-jazzy-*` + `install_geographiclib_datasets.sh` |
| Python | OpenCV (FFmpeg for RTSP), NumPy (<2, apt), PyYAML, Pillow, pytest, pyzbar (optional) | apt |
| OCR (optional) | rapidocr + onnxruntime, python3-shapely | pip `--user`, apt |
| Gazebo | Gazebo Harmonic (`gz-harmonic`, gz sim 8) + `libgz-sim8-dev`, rapidjson, GStreamer/OpenCV dev | packages.osrfoundation.org apt repo |
| ROS <-> Gazebo | `ros-jazzy-ros-gz` (ros_gz_bridge for the camera) | apt |
| ArduPilot | ArduCopter SITL, branch **Copter-4.5** (same as the Cube), `~/ardupilot/build/sitl/bin/arducopter` | git clone + `./waf configure --board sitl && ./waf copter` |
| ArduPilot prerequisites | compilers + `~/venv-ardupilot` (MAVProxy, pymavlink) | ArduPilot's *master* `install-prereqs-ubuntu.sh` (Copter-4.5's own script predates noble) |
| Copter-4.5 build Python | Python 3.11 venv `~/venv-ardupilot-py311` (deadsnakes PPA) | Copter-4.5's waf imports `imp`, removed in Python 3.12 |
| ardupilot_gazebo | ArduPilotPlugin + iris models, `~/ardupilot_gazebo/build/libArduPilotPlugin.so` | git clone + cmake, `GZ_VERSION=harmonic` |
| Serial access | user added to `dialout` (Cube on /dev/ttyACM0) | log out/in once |
| ~/.bashrc | ROS + workspace setup; `ARDUPILOT_HOME`, `ARDUPILOT_GAZEBO_HOME`, `GZ_VERSION`, `GZ_SIM_*` paths | appended once |

The ArduPilot and ardupilot_gazebo builds run with the ROS environment removed (`PYTHONPATH`,
`CMAKE_PREFIX_PATH`, ...), so ROS's vendored Gazebo libraries do not mix into the plugin build.
The ArduPilot venvs are not made the default Python: ROS keeps `/usr/bin/python3`.

Disk: about 10 GB for the simulation (ArduPilot with submodules ~3 GB, Gazebo + ros_gz ~2 GB).

## After installing

```bash
# new terminal (so ~/.bashrc is loaded)
ros2 launch bc_sim sitl.launch.py                 # terminal 1: Gazebo + SITL + MAVProxy + MAVROS + camera
ros2 launch bc_bringup sim_mission.launch.py      # terminal 2: the mission
ros2 launch bc_bringup drone.launch.py geofence_file:=/home/pi/delivery_zone.txt   # real drone
```

SIYI A8 mini on the Pi: give the Ethernet port a static address in 192.168.144.x (not .25, the camera's own).
