# Offline checker (no ROS needed)

Runs the workspace without ROS 2 installed, against small in-process stand-ins for `rclpy`,
`py_trees`, `py_trees_ros` and the message packages (`fakeros/`). The messages are generated from
`src/mission_interfaces` and enforce ROS's field types. This is a test tool: it is not used by the
robot, and colcon ignores this folder (`tools/COLCON_IGNORE`).

Needs Python 3.10+, numpy, opencv-python, pyyaml.

```bash
python3 unit_runner.py ../../src                  # the unit tests
python3 fc_check.py                               # real flight_controller vs fake MAVROS topics (+ setpoint stream)
python3 harness.py nominal   out_nominal          # full bench mission (~3 min, real time)
python3 harness.py no_green  out_no_green         # also: ref_qr_far (reference QR outside the first view: found by the stage 2 search), no_blue, no_twin, red
QR_SEARCH=lawnmower python3 harness.py nominal out_lawn   # stage 9 = the script's lawnmower
```

Stage 9 defaults to `target_search` with `bc_bringup/config/delivery_zone.sim.txt` (the synthetic
field's delivery zone); `red` adds a 4 x 4 m red zone in the QR field. Gazebo / SITL are not covered here:
`bc_sim`'s world, models and configuration are checked by `src/bc_sim/test/test_world.py`.

Each harness run writes `log.txt`, `summary.txt` (outcome, stage timeline, callback exceptions),
`traj.csv`, `trajectory.png` (path over the synthetic field) and `hud.mp4`.
