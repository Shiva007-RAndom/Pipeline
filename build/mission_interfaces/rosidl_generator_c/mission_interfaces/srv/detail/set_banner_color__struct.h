// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:srv/SetBannerColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/srv/set_banner_color.h"


#ifndef MISSION_INTERFACES__SRV__DETAIL__SET_BANNER_COLOR__STRUCT_H_
#define MISSION_INTERFACES__SRV__DETAIL__SET_BANNER_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBannerColor in the package mission_interfaces.
typedef struct mission_interfaces__srv__SetBannerColor_Request
{
  /// "green" | "blue" | ""
  rosidl_runtime_c__String color;
} mission_interfaces__srv__SetBannerColor_Request;

// Struct for a sequence of mission_interfaces__srv__SetBannerColor_Request.
typedef struct mission_interfaces__srv__SetBannerColor_Request__Sequence
{
  mission_interfaces__srv__SetBannerColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__SetBannerColor_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetBannerColor in the package mission_interfaces.
typedef struct mission_interfaces__srv__SetBannerColor_Response
{
  bool success;
  rosidl_runtime_c__String message;
} mission_interfaces__srv__SetBannerColor_Response;

// Struct for a sequence of mission_interfaces__srv__SetBannerColor_Response.
typedef struct mission_interfaces__srv__SetBannerColor_Response__Sequence
{
  mission_interfaces__srv__SetBannerColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__SetBannerColor_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__srv__SetBannerColor_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__srv__SetBannerColor_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetBannerColor in the package mission_interfaces.
typedef struct mission_interfaces__srv__SetBannerColor_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__srv__SetBannerColor_Request__Sequence request;
  mission_interfaces__srv__SetBannerColor_Response__Sequence response;
} mission_interfaces__srv__SetBannerColor_Event;

// Struct for a sequence of mission_interfaces__srv__SetBannerColor_Event.
typedef struct mission_interfaces__srv__SetBannerColor_Event__Sequence
{
  mission_interfaces__srv__SetBannerColor_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__srv__SetBannerColor_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__SRV__DETAIL__SET_BANNER_COLOR__STRUCT_H_
