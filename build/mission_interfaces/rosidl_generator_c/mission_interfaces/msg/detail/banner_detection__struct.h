// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:msg/BannerDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/banner_detection.h"


#ifndef MISSION_INTERFACES__MSG__DETAIL__BANNER_DETECTION__STRUCT_H_
#define MISSION_INTERFACES__MSG__DETAIL__BANNER_DETECTION__STRUCT_H_

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
// Member 'color'
// Member 'source'
// Member 'text'
#include "rosidl_runtime_c/string.h"
// Member 'position_estimate'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/BannerDetection in the package mission_interfaces.
/**
  * Output of banner_detector for one camera frame (published only while a colour is active).
 */
typedef struct mission_interfaces__msg__BannerDetection
{
  /// copied from the image
  std_msgs__msg__Header header;
  /// "green" | "blue": the colour searched for in this frame
  rosidl_runtime_c__String color;
  /// a banner passed classification in this frame
  bool detected;
  /// "SHAPE" (ratio/fill/full-view + persistence) | "OCR" (AeroTHON + 2026 read)
  rosidl_runtime_c__String source;
  rosidl_runtime_c__String text;
  /// px, banner centre (reconstructed along the long axis for a partial OCR view)
  float u;
  float v;
  /// TL, TR, BR, BL corners x0,y0,...,x3,y3 in px
  float quad[8];
  /// rad, long-axis angle in the image (x right, y down), [-pi/2, pi/2)
  float angle;
  /// quad touches the image border
  bool partial;
  uint32_t image_width;
  uint32_t image_height;
  /// colour regions above min area in this frame
  uint16_t candidates;
  /// shape persistence counter
  uint16_t consecutive_hits;
  /// Drone pose used for this frame (from /flight_controller/pose) and the banner position it gives
  bool pose_valid;
  /// m above take-off
  float alt_rel;
  float drone_x;
  float drone_y;
  float drone_z;
  float drone_heading;
  /// local NED of the banner centre (pinhole reprojection), z = drone_z
  geometry_msgs__msg__Point position_estimate;
} mission_interfaces__msg__BannerDetection;

// Struct for a sequence of mission_interfaces__msg__BannerDetection.
typedef struct mission_interfaces__msg__BannerDetection__Sequence
{
  mission_interfaces__msg__BannerDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__msg__BannerDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__MSG__DETAIL__BANNER_DETECTION__STRUCT_H_
