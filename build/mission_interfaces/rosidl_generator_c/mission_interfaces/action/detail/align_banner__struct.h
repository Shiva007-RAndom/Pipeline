// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:action/AlignBanner.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/align_banner.h"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__ALIGN_BANNER__STRUCT_H_
#define MISSION_INTERFACES__ACTION__DETAIL__ALIGN_BANNER__STRUCT_H_

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
// Member 'initial_target'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/AlignBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__AlignBanner_Goal
{
  rosidl_runtime_c__String color;
  /// local NED to fly to first (from SearchBanner); z = altitude to hold
  geometry_msgs__msg__Point initial_target;
  /// rad; the 180 deg ambiguity is resolved towards it
  float expected_heading;
  /// rad; candidates further than this from expected are rejected (<= 0: 25 deg)
  float max_heading_correction;
  uint8_t max_iters;
  float tol_px;
  /// fraction of the measured offset applied per iteration
  float gain;
  /// s to wait after each correction
  float settle_time;
} mission_interfaces__action__AlignBanner_Goal;

// Struct for a sequence of mission_interfaces__action__AlignBanner_Goal.
typedef struct mission_interfaces__action__AlignBanner_Goal__Sequence
{
  mission_interfaces__action__AlignBanner_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__AlignBanner_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'banner_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/AlignBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__AlignBanner_Result
{
  /// false only if cancelled or the flight controller failed
  bool success;
  rosidl_runtime_c__String message;
  /// centred within tol_px with the banner fully in view
  bool locked;
  /// at least one heading candidate was accepted
  bool heading_measured;
  /// last accepted candidate, else expected_heading
  float corridor_heading;
  /// final servo target (local NED)
  geometry_msgs__msg__Point banner_position;
} mission_interfaces__action__AlignBanner_Result;

// Struct for a sequence of mission_interfaces__action__AlignBanner_Result.
typedef struct mission_interfaces__action__AlignBanner_Result__Sequence
{
  mission_interfaces__action__AlignBanner_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__AlignBanner_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/AlignBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__AlignBanner_Feedback
{
  uint8_t iteration;
  float error_px;
  bool partial;
} mission_interfaces__action__AlignBanner_Feedback;

// Struct for a sequence of mission_interfaces__action__AlignBanner_Feedback.
typedef struct mission_interfaces__action__AlignBanner_Feedback__Sequence
{
  mission_interfaces__action__AlignBanner_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__AlignBanner_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mission_interfaces/action/detail/align_banner__struct.h"

/// Struct defined in action/AlignBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__AlignBanner_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__AlignBanner_Goal goal;
} mission_interfaces__action__AlignBanner_SendGoal_Request;

// Struct for a sequence of mission_interfaces__action__AlignBanner_SendGoal_Request.
typedef struct mission_interfaces__action__AlignBanner_SendGoal_Request__Sequence
{
  mission_interfaces__action__AlignBanner_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__AlignBanner_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AlignBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__AlignBanner_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mission_interfaces__action__AlignBanner_SendGoal_Response;

// Struct for a sequence of mission_interfaces__action__AlignBanner_SendGoal_Response.
typedef struct mission_interfaces__action__AlignBanner_SendGoal_Response__Sequence
{
  mission_interfaces__action__AlignBanner_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__AlignBanner_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__AlignBanner_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__AlignBanner_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/AlignBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__AlignBanner_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__AlignBanner_SendGoal_Request__Sequence request;
  mission_interfaces__action__AlignBanner_SendGoal_Response__Sequence response;
} mission_interfaces__action__AlignBanner_SendGoal_Event;

// Struct for a sequence of mission_interfaces__action__AlignBanner_SendGoal_Event.
typedef struct mission_interfaces__action__AlignBanner_SendGoal_Event__Sequence
{
  mission_interfaces__action__AlignBanner_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__AlignBanner_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AlignBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__AlignBanner_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mission_interfaces__action__AlignBanner_GetResult_Request;

// Struct for a sequence of mission_interfaces__action__AlignBanner_GetResult_Request.
typedef struct mission_interfaces__action__AlignBanner_GetResult_Request__Sequence
{
  mission_interfaces__action__AlignBanner_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__AlignBanner_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/align_banner__struct.h"

/// Struct defined in action/AlignBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__AlignBanner_GetResult_Response
{
  int8_t status;
  mission_interfaces__action__AlignBanner_Result result;
} mission_interfaces__action__AlignBanner_GetResult_Response;

// Struct for a sequence of mission_interfaces__action__AlignBanner_GetResult_Response.
typedef struct mission_interfaces__action__AlignBanner_GetResult_Response__Sequence
{
  mission_interfaces__action__AlignBanner_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__AlignBanner_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__AlignBanner_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__AlignBanner_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/AlignBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__AlignBanner_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__AlignBanner_GetResult_Request__Sequence request;
  mission_interfaces__action__AlignBanner_GetResult_Response__Sequence response;
} mission_interfaces__action__AlignBanner_GetResult_Event;

// Struct for a sequence of mission_interfaces__action__AlignBanner_GetResult_Event.
typedef struct mission_interfaces__action__AlignBanner_GetResult_Event__Sequence
{
  mission_interfaces__action__AlignBanner_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__AlignBanner_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/align_banner__struct.h"

/// Struct defined in action/AlignBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__AlignBanner_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__AlignBanner_Feedback feedback;
} mission_interfaces__action__AlignBanner_FeedbackMessage;

// Struct for a sequence of mission_interfaces__action__AlignBanner_FeedbackMessage.
typedef struct mission_interfaces__action__AlignBanner_FeedbackMessage__Sequence
{
  mission_interfaces__action__AlignBanner_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__AlignBanner_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__ALIGN_BANNER__STRUCT_H_
