// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/position_setpoint.h"


#ifndef MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__STRUCT_H_
#define MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__STRUCT_H_

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

/// Struct defined in msg/PositionSetpoint in the package mission_interfaces.
/**
  * Streamed position target for flight_controller (~/setpoint), local NED. Used by target_search to
  * follow the red-zone avoidance carrot point (published at ~20 Hz). Accepted only while GUIDED is
  * engaged and no action goal is running; if the stream stops for 0.5 s the vehicle holds position.
 */
typedef struct mission_interfaces__msg__PositionSetpoint
{
  std_msgs__msg__Header header;
  /// north, m
  float x;
  /// east, m
  float y;
  /// down, m
  float z;
  /// heading, rad (0 = north, clockwise); NaN = keep the current heading
  float yaw;
} mission_interfaces__msg__PositionSetpoint;

// Struct for a sequence of mission_interfaces__msg__PositionSetpoint.
typedef struct mission_interfaces__msg__PositionSetpoint__Sequence
{
  mission_interfaces__msg__PositionSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__msg__PositionSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__MSG__DETAIL__POSITION_SETPOINT__STRUCT_H_
