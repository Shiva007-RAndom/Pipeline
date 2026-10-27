// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:msg/QrDetection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/qr_detection.h"


#ifndef MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__STRUCT_H_
#define MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__STRUCT_H_

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
// Member 'decoded_text'
#include "rosidl_runtime_c/string.h"
// Member 'position_estimate'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/QrDetection in the package mission_interfaces.
/**
  * Output of qr_detector for one camera frame.
 */
typedef struct mission_interfaces__msg__QrDetection
{
  /// copied from the image
  std_msgs__msg__Header header;
  /// a QR code was found in this frame
  bool detected;
  /// quad corners x0,y0,...,x3,y3 in px
  float corners[8];
  /// px, centre of the quad
  float u;
  float v;
  /// "" if it could not be decoded
  rosidl_runtime_c__String decoded_text;
  /// a reference QR has been captured from the camera
  bool reference_ready;
  /// 4-rotation module-grid similarity to the reference, 0..1 (1.0 for a text match)
  float score;
  /// decoded text equals the reference text, or score >= match_threshold
  bool matched;
  float match_threshold;
  uint32_t image_width;
  uint32_t image_height;
  bool pose_valid;
  float alt_rel;
  float drone_x;
  float drone_y;
  float drone_z;
  float drone_heading;
  /// local NED of the QR centre (pinhole reprojection), z = drone_z
  geometry_msgs__msg__Point position_estimate;
} mission_interfaces__msg__QrDetection;

// Struct for a sequence of mission_interfaces__msg__QrDetection.
typedef struct mission_interfaces__msg__QrDetection__Sequence
{
  mission_interfaces__msg__QrDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__msg__QrDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__MSG__DETAIL__QR_DETECTION__STRUCT_H_
