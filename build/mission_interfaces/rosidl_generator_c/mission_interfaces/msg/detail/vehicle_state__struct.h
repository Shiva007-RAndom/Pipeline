// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/vehicle_state.h"


#ifndef MISSION_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define MISSION_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'mode'
// Member 'controller'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VehicleState in the package mission_interfaces.
/**
  * Vehicle state published by flight_controller (MAVROS) or bench_flight_controller on
  * /flight_controller/pose. Every mission node reads the drone pose from here, so the bench
  * controller can stand in for the real one without any other node noticing.
 */
typedef struct mission_interfaces__msg__VehicleState
{
  std_msgs__msg__Header header;
  /// local position is valid
  bool valid;
  /// autopilot connected, booted and has a GPS fix (bench: always true)
  bool ready;
  bool armed;
  bool airborne;
  /// flight mode as reported by the autopilot ("GUIDED", "GUIDED_NOGPS", ...)
  rosidl_runtime_c__String mode;
  /// "mavros" | "bench"
  rosidl_runtime_c__String controller;
  /// Local NED position from the EKF origin (m), heading 0 = north clockwise (rad)
  float x;
  float y;
  float z;
  float heading;
  float vx;
  float vy;
  float vz;
  /// m above home (take-off point); NaN if unknown
  float alt_rel;
  /// Attitude (NED earth, FRD body), rad. Used to drop camera frames taken while banking hard.
  float roll;
  float pitch;
  /// Geographic position of the local frame's origin (geofence files are lat/lon)
  bool xy_global;
  double ref_lat;
  double ref_lon;
} mission_interfaces__msg__VehicleState;

// Struct for a sequence of mission_interfaces__msg__VehicleState.
typedef struct mission_interfaces__msg__VehicleState__Sequence
{
  mission_interfaces__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
