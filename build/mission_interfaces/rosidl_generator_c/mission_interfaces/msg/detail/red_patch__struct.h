// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:msg/RedPatch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_patch.h"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__STRUCT_H_
#define MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'contour'
#include "geometry_msgs/msg/detail/point32__struct.h"

/// Struct defined in msg/RedPatch in the package mission_interfaces.
/**
  * One red patch (candidate red / restricted zone) found in an image.
  * Ported from qr_match_interfaces/RedPatch (Shiva007-RAndom/Qr-and-red-zone-detection).
 */
typedef struct mission_interfaces__msg__RedPatch
{
  /// Centroid from image moments, in pixels (origin top-left)
  float centroid_x;
  float centroid_y;
  /// Offset of the centroid from the image centre, normalised to [-1, 1] (+x = right, +y = down)
  float offset_x;
  float offset_y;
  /// Contour area in pixels^2 and as a fraction of the whole image
  float area_px;
  float area_fraction;
  /// Axis-aligned bounding box in pixels: [x, y, width, height]
  int32_t bbox_xywh[4];
  /// Simplified outline of the patch, pixel coordinates (z unused)
  geometry_msgs__msg__Point32__Sequence contour;
} mission_interfaces__msg__RedPatch;

// Struct for a sequence of mission_interfaces__msg__RedPatch.
typedef struct mission_interfaces__msg__RedPatch__Sequence
{
  mission_interfaces__msg__RedPatch * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__msg__RedPatch__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_PATCH__STRUCT_H_
