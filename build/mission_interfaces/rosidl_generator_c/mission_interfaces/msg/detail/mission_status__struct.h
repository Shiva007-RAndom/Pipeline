// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/mission_status.h"


#ifndef MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
#define MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_

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
// Member 'stage'
// Member 'state_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MissionStatus in the package mission_interfaces.
/**
  * Published by mission_tree every tick (HUD header line and countdown).
 */
typedef struct mission_interfaces__msg__MissionStatus
{
  std_msgs__msg__Header header;
  /// name of the running tree step
  rosidl_runtime_c__String stage;
  /// short text for the HUD
  rosidl_runtime_c__String state_text;
  /// s left in a timed hold (0 = none)
  float countdown;
  bool reference_ready;
} mission_interfaces__msg__MissionStatus;

// Struct for a sequence of mission_interfaces__msg__MissionStatus.
typedef struct mission_interfaces__msg__MissionStatus__Sequence
{
  mission_interfaces__msg__MissionStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__msg__MissionStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_H_
