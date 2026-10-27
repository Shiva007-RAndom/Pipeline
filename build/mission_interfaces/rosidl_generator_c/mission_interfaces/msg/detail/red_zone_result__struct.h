// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:msg/RedZoneResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_zone_result.h"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__STRUCT_H_
#define MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__STRUCT_H_

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
// Member 'patches'
#include "mission_interfaces/msg/detail/red_patch__struct.h"

/// Struct defined in msg/RedZoneResult in the package mission_interfaces.
/**
  * Result of red-patch detection on one image (red_zone_detector, /perception/red_zone).
  * Ported from qr_match_interfaces/RedZoneResult (Shiva007-RAndom/Qr-and-red-zone-detection).
  * Published for EVERY processed frame (detected = false too): target_search uses the frames without
  * red to know which ground the camera has looked at.
 */
typedef struct mission_interfaces__msg__RedZoneResult
{
  /// copied from the image (camera time)
  std_msgs__msg__Header header;
  uint32_t image_width;
  uint32_t image_height;
  bool detected;
  uint16_t num_patches;
  float total_area_fraction;
  /// by descending area
  mission_interfaces__msg__RedPatch__Sequence patches;
  float processing_time_ms;
} mission_interfaces__msg__RedZoneResult;

// Struct for a sequence of mission_interfaces__msg__RedZoneResult.
typedef struct mission_interfaces__msg__RedZoneResult__Sequence
{
  mission_interfaces__msg__RedZoneResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__msg__RedZoneResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__STRUCT_H_
