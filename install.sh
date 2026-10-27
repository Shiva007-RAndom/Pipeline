#!/usr/bin/env bash
# =============================================================================
# banner_corridor_ws: install everything the workspace needs (drone + simulation), then build and test it.
# For Ubuntu 24.04 (noble) with ROS 2 Jazzy already installed in /opt/ros/jazzy.
#
# Installs: ROS packages (MAVROS + GeographicLib datasets, py_trees, ros_gz), OpenCV, and for the simulation
# Gazebo Harmonic, ArduPilot ArduCopter SITL (Copter-4.5, same as the Cube), MAVProxy, ardupilot_gazebo.
#
# Usage (from the workspace root, i.e. the folder that contains src/):
#   ./install.sh                          # everything: drone + simulation, build + tests
#   ./install.sh --no-sim                 # drone only (the Raspberry Pi 5): no Gazebo / ArduPilot SITL
#   ./install.sh --sitl-only              # Raspberry Pi 5 + ArduCopter SITL / MAVProxy, no Gazebo
#                                         # (sitl.launch.py mode:=lite)
#   ./install.sh --with-ocr               # also RapidOCR (optional "AeroTHON 2026" text check)
#   ./install.sh --with-mavproxy-gui      # also MAVProxy console/map (wxPython, ~30 min to build)
#   ./install.sh --ardupilot-branch=Copter-4.5 --ardupilot-dir=~/ardupilot --ardupilot-gazebo-dir=~/ardupilot_gazebo
#   ./install.sh --no-build               # dependencies only
#   ./install.sh --no-test                # skip colcon test
#   ./install.sh --no-bashrc              # do not add the source / environment lines to ~/.bashrc
#
# Safe to run again: every step checks whether it is already done. Simulation install: ~30-60 min, ~10 GB.
# =============================================================================
set -euo pipefail

WITH_OCR=0
SIM=1
GAZEBO=1
MAVPROXY_GUI=0
BUILD=1
TEST=1
BASHRC=1
AP_BRANCH=Copter-4.5
AP_DIR="$HOME/ardupilot"
APGZ_DIR="$HOME/ardupilot_gazebo"
for arg in "$@"; do
  case "$arg" in
    --with-ocr)            WITH_OCR=1 ;;
    --no-sim)              SIM=0; GAZEBO=0 ;;
    --sitl-only)           SIM=1; GAZEBO=0 ;;
    --with-mavproxy-gui)   MAVPROXY_GUI=1 ;;
    --ardupilot-branch=*)  AP_BRANCH="${arg#*=}" ;;
    --ardupilot-dir=*)     AP_DIR="${arg#*=}"; AP_DIR="${AP_DIR/#\~/$HOME}" ;;
    --ardupilot-gazebo-dir=*) APGZ_DIR="${arg#*=}"; APGZ_DIR="${APGZ_DIR/#\~/$HOME}" ;;
    --no-build)            BUILD=0; TEST=0 ;;
    --no-test)             TEST=0 ;;
    --no-bashrc)           BASHRC=0 ;;
    -h|--help)             sed -n '2,22p' "$0"; exit 0 ;;
    *) echo "Unknown option: $arg (see --help)"; exit 1 ;;
  esac
done

WS="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROS_DISTRO_WANTED=jazzy
ROS_SETUP=/opt/ros/${ROS_DISTRO_WANTED}/setup.bash

step() { echo; echo "==== $* ===="; }
warn() { echo "WARNING: $*" >&2; }

# ----------------------------------------------------------------- checks
step "Checking the system"
if [ "$(id -u)" -eq 0 ]; then
  echo "Run this as your normal user (it calls sudo where needed), not as root."; exit 1
fi
. /etc/os-release
if [ "${VERSION_CODENAME:-}" != "noble" ]; then
  warn "This script is for Ubuntu 24.04 (noble); found ${PRETTY_NAME:-unknown}. Continuing anyway."
fi
if [ ! -f "$ROS_SETUP" ]; then
  echo "ROS 2 Jazzy not found at $ROS_SETUP. Install ROS 2 Jazzy first."; exit 1
fi
if [ ! -d "$WS/src" ]; then
  echo "No src/ folder next to this script ($WS). Put install.sh in the workspace root."; exit 1
fi
echo "Workspace: $WS"
# ROS setup scripts reference unset variables: source them with nounset off
set +u; source "$ROS_SETUP"; set -u
echo "ROS_DISTRO=$ROS_DISTRO"

# ----------------------------------------------------------------- apt packages
step "Installing apt packages (sudo)"
sudo apt-get update
APT_PACKAGES=(
  # build tools
  python3-colcon-common-extensions
  python3-rosdep
  python3-pip
  ros-${ROS_DISTRO_WANTED}-ament-cmake
  ros-${ROS_DISTRO_WANTED}-ament-cmake-python
  ros-${ROS_DISTRO_WANTED}-rosidl-default-generators
  ros-${ROS_DISTRO_WANTED}-rosidl-default-runtime
  ros-${ROS_DISTRO_WANTED}-launch-ros
  # messages used by the nodes
  ros-${ROS_DISTRO_WANTED}-geometry-msgs
  ros-${ROS_DISTRO_WANTED}-sensor-msgs
  ros-${ROS_DISTRO_WANTED}-std-msgs
  ros-${ROS_DISTRO_WANTED}-std-srvs
  ros-${ROS_DISTRO_WANTED}-action-msgs
  ros-${ROS_DISTRO_WANTED}-rcl-interfaces
  ros-${ROS_DISTRO_WANTED}-geographic-msgs
  # ArduPilot link (flight_controller, bench spin_motors)
  ros-${ROS_DISTRO_WANTED}-mavros
  ros-${ROS_DISTRO_WANTED}-mavros-extras
  ros-${ROS_DISTRO_WANTED}-mavros-msgs
  # mission tree
  ros-${ROS_DISTRO_WANTED}-py-trees
  ros-${ROS_DISTRO_WANTED}-py-trees-ros
  # Python libraries (apt versions match ROS: NumPy 1.26 on noble)
  python3-opencv          # includes the FFmpeg backend used for the SIYI RTSP stream
  python3-numpy
  python3-yaml
  python3-pytest
  python3-pil
  # tools
  git
  curl
  iproute2                # ss: the MAVROS / MAVProxy scripts wait for the SITL port
)
sudo apt-get install -y "${APT_PACKAGES[@]}"

# ----------------------------------------------------------------- Gazebo Harmonic + ros_gz
if [ "$GAZEBO" -eq 1 ]; then
  step "Gazebo Harmonic (packages.osrfoundation.org) + ros_gz (sudo)"
  if [ ! -f /etc/apt/sources.list.d/gazebo-stable.list ]; then
    sudo apt-get install -y lsb-release gnupg
    sudo curl -sSfL https://packages.osrfoundation.org/gazebo.gpg \
         --output /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg
    echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] \
http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | \
      sudo tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null
    sudo apt-get update
  fi
  SIM_PACKAGES=(
    gz-harmonic                       # gz sim 8
    libgz-sim8-dev rapidjson-dev      # to build ardupilot_gazebo's ArduPilotPlugin
    libopencv-dev libgstreamer1.0-dev libgstreamer-plugins-base1.0-dev
    gstreamer1.0-plugins-bad gstreamer1.0-libav gstreamer1.0-gl
    build-essential cmake pkg-config
    ros-${ROS_DISTRO_WANTED}-ros-gz   # ros_gz_bridge (camera) + ros_gz_sim
  )
  sudo apt-get install -y "${SIM_PACKAGES[@]}"
fi

# Optional: installed one by one so a missing one never stops the script
OPTIONAL_PACKAGES=(
  ros-${ROS_DISTRO_WANTED}-rqt-image-view   # view /hud/image
  python3-pyzbar                             # second QR decoder (pulls in the zbar library)
  python3-piexif                             # survey_capture geotags like airdrop_survey (else Pillow, same tags)
)
for pkg in "${OPTIONAL_PACKAGES[@]}"; do
  sudo apt-get install -y "$pkg" || warn "optional package $pkg could not be installed (not needed to fly)"
done

# ----------------------------------------------------------------- MAVROS datasets
step "MAVROS GeographicLib datasets (needed once, else mavros_node fails to start)"
GEOID_DIR=/usr/share/GeographicLib/geoids
if [ -d "$GEOID_DIR" ] && [ -n "$(ls -A "$GEOID_DIR" 2>/dev/null)" ]; then
  echo "Already installed in $GEOID_DIR"
else
  DATASET_SCRIPT=/opt/ros/${ROS_DISTRO_WANTED}/lib/mavros/install_geographiclib_datasets.sh
  if [ -x "$DATASET_SCRIPT" ]; then
    sudo "$DATASET_SCRIPT"
  else
    warn "$DATASET_SCRIPT not found; trying geographiclib-tools instead"
    sudo apt-get install -y geographiclib-tools
    sudo geographiclib-get-geoids egm96-5
    sudo geographiclib-get-gravity egm96
    sudo geographiclib-get-magnetic emm2015
  fi
fi

# ----------------------------------------------------------------- rosdep
step "rosdep: anything else declared in the package.xml files"
if [ ! -f /etc/ros/rosdep/sources.list.d/20-default.list ]; then
  sudo rosdep init
fi
rosdep update --rosdistro "$ROS_DISTRO_WANTED"
SKIP_KEYS=()
[ "$GAZEBO" -eq 0 ] && SKIP_KEYS=(--skip-keys "ros_gz_bridge")   # bc_sim is not built on the drone
rosdep install --from-paths "$WS/src" --ignore-src -y --rosdistro "$ROS_DISTRO_WANTED" "${SKIP_KEYS[@]}" || \
  warn "rosdep reported keys it could not resolve (see above); the apt list above covers what the nodes use."

# ----------------------------------------------------------------- optional OCR
if [ "$WITH_OCR" -eq 1 ]; then
  step "RapidOCR (optional banner text check)"
  sudo apt-get install -y python3-shapely   # RapidOCR needs it in /usr/bin/python3, else "RapidOCR unavailable"
  # ROS runs nodes with /usr/bin/python3, so install for the user (not in a venv).
  # Pin NumPy below 2: the apt ROS Python packages are built against NumPy 1.x.
  CONSTRAINTS="$(mktemp)"
  echo "numpy<2" > "$CONSTRAINTS"
  python3 -m pip install --user --break-system-packages --constraint "$CONSTRAINTS" rapidocr onnxruntime
  rm -f "$CONSTRAINTS"
  python3 -c "import numpy; assert int(numpy.__version__.split('.')[0]) < 2, numpy.__version__; print('numpy', numpy.__version__)"
  # rapidocr pulls in a pip OpenCV wheel (often opencv-python-headless: no windows) that shadows apt's
  # python3-opencv (GTK windows, FFmpeg for the SIYI RTSP stream). Remove it; RapidOCR runs on apt's cv2.
  python3 -m pip uninstall -y --break-system-packages opencv-python opencv-python-headless \
      opencv-contrib-python opencv-contrib-python-headless 2>/dev/null || true
  python3 -c "import cv2; assert cv2.__file__.startswith('/usr/lib/python3/'), cv2.__file__; print('cv2', cv2.__version__, cv2.__file__)"
  python3 -c "from rapidocr import RapidOCR; print('RapidOCR import OK')"
fi

# ----------------------------------------------------------------- serial port access
step "Serial access to the Cube Orange+ (dialout group)"
if id -nG "$USER" | grep -qw dialout; then
  echo "$USER is already in dialout"
else
  sudo usermod -aG dialout "$USER"
  echo "Added $USER to dialout: LOG OUT AND BACK IN for /dev/ttyACM0 access."
fi

# ----------------------------------------------------------------- ArduPilot SITL + MAVProxy
# A clean environment for the ArduPilot / Gazebo builds: no ROS Python path or CMake prefixes (ROS ships its
# own vendored Gazebo libraries, which must not be mixed into the ardupilot_gazebo build).
clean_env() { env -u PYTHONPATH -u CMAKE_PREFIX_PATH -u AMENT_PREFIX_PATH -u COLCON_PREFIX_PATH \
                  -u LD_LIBRARY_PATH -u ROS_DISTRO -u ROS_VERSION "$@"; }

if [ "$SIM" -eq 1 ]; then
  step "ArduPilot $AP_BRANCH (ArduCopter SITL) in $AP_DIR"
  if [ ! -d "$AP_DIR/.git" ]; then
    git clone --recurse-submodules --branch "$AP_BRANCH" https://github.com/ArduPilot/ardupilot.git "$AP_DIR"
  else
    CUR="$(git -C "$AP_DIR" rev-parse --abbrev-ref HEAD 2>/dev/null || echo '?')"
    echo "Using the existing checkout ($CUR). Not switching branches; wanted $AP_BRANCH."
    [ "$CUR" != "$AP_BRANCH" ] && warn "$AP_DIR is on '$CUR', not '$AP_BRANCH' (git -C $AP_DIR checkout $AP_BRANCH)"
    git -C "$AP_DIR" submodule update --init --recursive
  fi

  step "ArduPilot prerequisites + ~/venv-ardupilot (MAVProxy, pymavlink, empy 3.3.4)"
  # Copter-4.5's install-prereqs-ubuntu.sh predates noble (no venv: pip fails with PEP 668), so the
  # current master script is used; it supports noble and creates ~/venv-ardupilot (not made the default
  # Python: ROS keeps using /usr/bin/python3).
  PREREQS="$AP_DIR/Tools/environment_install/install-prereqs-ubuntu-noble.sh"
  if [ ! -f "$PREREQS" ]; then
    curl -sSfL -o "$PREREQS" \
      https://raw.githubusercontent.com/ArduPilot/ardupilot/master/Tools/environment_install/install-prereqs-ubuntu.sh
  fi
  if [ ! -f "$HOME/venv-ardupilot/bin/activate" ] || ! "$HOME/venv-ardupilot/bin/python" -c "import MAVProxy" 2>/dev/null; then
    GRAPHIC=1; [ "$MAVPROXY_GUI" -eq 1 ] && GRAPHIC=0
    clean_env SKIP_AP_GRAPHIC_ENV=$GRAPHIC SKIP_AP_COV_ENV=1 SKIP_AP_GIT_CHECK=1 DO_AP_STM_ENV=0 \
      DO_PYTHON_VENV_ENV=0 bash "$PREREQS" -y
  else
    echo "~/venv-ardupilot with MAVProxy already present"
  fi
  [ -f "$HOME/venv-ardupilot/bin/activate" ] || { echo "~/venv-ardupilot was not created: see the output above"; exit 1; }
  "$HOME/venv-ardupilot/bin/pip" install --upgrade MAVProxy pymavlink   # run_sitl.sh runs MAVProxy from here

  # Copter-4.5's waf imports the 'imp' module, removed in Python 3.12 (noble's python): "No module named
  # 'imp'" at ./waf configure. Branches up to 4.5 are therefore built with Python 3.11 (deadsnakes PPA) in a
  # separate build venv; master / 4.6+ build with ~/venv-ardupilot.
  BUILD_VENV="$HOME/venv-ardupilot"
  case "$AP_BRANCH" in
    Copter-4.[0-5]*|ArduCopter-4.[0-5]*|Copter-3*)
      step "Python 3.11 build venv for $AP_BRANCH (~/venv-ardupilot-py311)"
      if ! command -v python3.11 >/dev/null 2>&1; then
        sudo apt-get install -y software-properties-common
        sudo add-apt-repository -y ppa:deadsnakes/ppa
        sudo apt-get update
        sudo apt-get install -y python3.11 python3.11-venv python3.11-dev
      fi
      [ -f "$HOME/venv-ardupilot-py311/bin/activate" ] || python3.11 -m venv "$HOME/venv-ardupilot-py311"
      BUILD_VENV="$HOME/venv-ardupilot-py311"
      ;;
  esac
  "$BUILD_VENV/bin/pip" install --upgrade pip setuptools wheel
  "$BUILD_VENV/bin/pip" install --upgrade "empy==3.3.4" future pexpect pymavlink lxml pyserial ptyprocess \
      dronecan geocoder intelhex

  step "Building ArduCopter SITL ($AP_DIR/build/sitl/bin/arducopter) with $BUILD_VENV"
  clean_env bash -c "source '$BUILD_VENV/bin/activate' && cd '$AP_DIR' && \
                     ./waf configure --board sitl && ./waf copter"
  [ -x "$AP_DIR/build/sitl/bin/arducopter" ] || { echo "ArduCopter SITL build failed"; exit 1; }

fi

if [ "$GAZEBO" -eq 1 ]; then
  step "ardupilot_gazebo (ArduPilotPlugin for Gazebo Harmonic) in $APGZ_DIR"
  if [ ! -d "$APGZ_DIR/.git" ]; then
    git clone https://github.com/ArduPilot/ardupilot_gazebo.git "$APGZ_DIR"
  fi
  clean_env GZ_VERSION=harmonic bash -c "mkdir -p '$APGZ_DIR/build' && cd '$APGZ_DIR/build' && \
      cmake .. -DCMAKE_BUILD_TYPE=RelWithDebInfo && make -j\$(nproc)"
  [ -f "$APGZ_DIR/build/libArduPilotPlugin.so" ] || { echo "ardupilot_gazebo build failed"; exit 1; }
fi

# ----------------------------------------------------------------- import check
step "Checking the Python libraries"
python3 - <<'PY'
import cv2, numpy, yaml
print("OpenCV", cv2.__version__, cv2.__file__, "| NumPy", numpy.__version__)
if not cv2.__file__.startswith("/usr/lib/python3/"):
    print("WARNING: a pip OpenCV shadows apt's python3-opencv; if it is a -headless wheel, OpenCV windows "
          "(HUD, vision_test) fail: python3 -m pip uninstall --break-system-packages opencv-python-headless")
info = cv2.getBuildInformation()
ffmpeg = [l for l in info.splitlines() if "FFMPEG" in l.upper()]
print("OpenCV FFmpeg:", ffmpeg[0].strip() if ffmpeg else "not reported")
assert hasattr(cv2, "QRCodeDetector")
try:
    import pyzbar.pyzbar  # noqa: F401
    print("pyzbar OK")
except Exception as exc:  # noqa: BLE001
    print("pyzbar not usable (optional):", exc)
import py_trees, py_trees_ros  # noqa: F401
print("py_trees", py_trees.__version__ if hasattr(py_trees, "__version__") else "OK", "| py_trees_ros OK")
PY

# ----------------------------------------------------------------- build
if [ "$BUILD" -eq 1 ]; then
  step "Building the workspace (colcon)"
  cd "$WS"
  if [ "$SIM" -eq 1 ]; then
    colcon build --symlink-install
  else
    colcon build --symlink-install --packages-skip bc_sim
  fi
  set +u; source "$WS/install/setup.bash"; set -u
  python3 -c "from mission_interfaces.action import SearchTarget, GoTo; print('mission_interfaces OK')"
fi

if [ "$TEST" -eq 1 ]; then
  step "Running the tests (colcon test)"
  cd "$WS"
  SKIP=(); [ "$SIM" -eq 0 ] && SKIP=(--packages-skip bc_sim)
  colcon test --event-handlers console_direct- "${SKIP[@]}" || true
  colcon test-result --verbose || warn "some tests failed: see the output above"
fi

# ----------------------------------------------------------------- bashrc
if [ "$BASHRC" -eq 1 ]; then
  step "Adding the source lines to ~/.bashrc"
  MARK="# banner_corridor_ws"
  if grep -q "$MARK" "$HOME/.bashrc" 2>/dev/null; then
    echo "Already in ~/.bashrc"
  else
    {
      echo ""
      echo "$MARK"
      echo "source $ROS_SETUP"
      echo "[ -f $WS/install/setup.bash ] && source $WS/install/setup.bash"
    } >> "$HOME/.bashrc"
    echo "Added. Open a new terminal (or: source ~/.bashrc)."
  fi
  SIM_MARK="# banner_corridor_ws simulation"
  if [ "$SIM" -eq 1 ] && ! grep -q "$SIM_MARK" "$HOME/.bashrc" 2>/dev/null; then
    {
      echo "$SIM_MARK"
      echo "export ARDUPILOT_HOME=$AP_DIR"
      echo "export ARDUPILOT_GAZEBO_HOME=$APGZ_DIR"
      echo "export GZ_VERSION=harmonic"
      echo "export GZ_SIM_SYSTEM_PLUGIN_PATH=$APGZ_DIR/build:\${GZ_SIM_SYSTEM_PLUGIN_PATH}"
      echo "export GZ_SIM_RESOURCE_PATH=$APGZ_DIR/models:$APGZ_DIR/worlds:$WS/src/bc_sim/models:\${GZ_SIM_RESOURCE_PATH}"
      echo "export PATH=\$PATH:$AP_DIR/Tools/autotest"
    } >> "$HOME/.bashrc"
    echo "Added the simulation environment (ARDUPILOT_HOME, GZ_SIM_*) to ~/.bashrc."
  fi
fi

# ----------------------------------------------------------------- simulation check
if [ "$SIM" -eq 1 ]; then
  step "Checking the simulation stack"
  if [ "$GAZEBO" -eq 1 ]; then
    gz sim --versions || warn "gz sim not working"
    ls -l "$APGZ_DIR/build/libArduPilotPlugin.so"
  fi
  ls -l "$AP_DIR/build/sitl/bin/arducopter"
  "$HOME/venv-ardupilot/bin/mavproxy.py" --version 2>/dev/null | head -1 || warn "MAVProxy not working"
  python3 -c "import xml.dom.minidom as m; m.parse('$WS/src/bc_sim/worlds/aerothon_mission2_ardupilot.sdf'); print('world OK')"
fi

# ----------------------------------------------------------------- done
step "Done"
cat <<EOF
Next steps:
  1. If you were added to dialout: log out and back in.
  2. SIYI A8 mini on Ethernet: give this computer a static address in 192.168.144.x (not .25), e.g.
       nmcli con mod "<your wired connection>" ipv4.method manual ipv4.addresses 192.168.144.20/24
  3. Simulation (two terminals, new shells so ~/.bashrc is loaded):
       ros2 launch bc_sim sitl.launch.py              # Gazebo + ArduCopter SITL + MAVProxy + MAVROS + camera
       ros2 launch bc_bringup sim_mission.launch.py   # the mission (wait for "ready" / it waits by itself)
  4. Real drone (Cube on USB), with the delivery zone geofence:
       ros2 launch bc_bringup drone.launch.py geofence_file:=/path/to/delivery_zone.txt
  5. No hardware and no simulator (bench kinematics + synthetic camera):
       ros2 launch bc_bringup mission.launch.py bench:=true camera:=sim \
           geofence_file:=$WS/src/bc_bringup/config/delivery_zone.sim.txt
EOF
