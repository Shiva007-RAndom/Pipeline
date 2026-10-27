// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:msg/RedMap.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_map.h"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_MAP__STRUCT_H_
#define MISSION_INTERFACES__MSG__DETAIL__RED_MAP__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RedMap in the package mission_interfaces.
/**
  * The red seen so far (target_search, /perception/red_map, latched). Grid in the search's zone frame:
  *   x_z along `axis_heading` from (origin_north, origin_east), y_z 90 deg to the left of x_z
  *   (a rotation of the local NED frame aligned with the delivery zone's long side).
  * Consumers (qr_centering, target_search's SafeGoto) rebuild red_avoidance.RedMap from it.
 */
typedef struct mission_interfaces__msg__RedMap
{
  std_msgs__msg__Header header;
  double origin_north;
  double origin_east;
  /// rad, heading of +x_z
  double axis_heading;
  /// m per cell
  float cell;
  /// zone-frame coordinates of the grid's corner
  float grid_x0;
  float grid_y0;
  /// cells along x_z
  uint32_t width;
  /// cells along y_z
  uint32_t height;
  /// row-major (row = y index), 1 = red seen
  rosidl_runtime_c__uint8__Sequence data;
  uint32_t version;
  /// keep-out margin the search uses (m)
  float margin;
} mission_interfaces__msg__RedMap;

// Struct for a sequence of mission_interfaces__msg__RedMap.
typedef struct mission_interfaces__msg__RedMap__Sequence
{
  mission_interfaces__msg__RedMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__msg__RedMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_MAP__STRUCT_H_
