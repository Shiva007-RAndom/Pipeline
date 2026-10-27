// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:action/SearchBanner.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/search_banner.h"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__SEARCH_BANNER__STRUCT_H_
#define MISSION_INTERFACES__ACTION__DETAIL__SEARCH_BANNER__STRUCT_H_

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
// Member 'waypoints'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'dwell'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/SearchBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchBanner_Goal
{
  /// "green" | "blue"
  rosidl_runtime_c__String color;
  /// local NED
  geometry_msgs__msg__Point__Sequence waypoints;
  /// heading held during the search (rad, 0 = north, clockwise)
  float yaw;
  /// m/s; <= 0 uses the flight controller default
  float speed;
  /// s to hover and look at waypoint i (missing entries = 0)
  rosidl_runtime_c__float__Sequence dwell;
  bool detect_while_moving;
} mission_interfaces__action__SearchBanner_Goal;

// Struct for a sequence of mission_interfaces__action__SearchBanner_Goal.
typedef struct mission_interfaces__action__SearchBanner_Goal__Sequence
{
  mission_interfaces__action__SearchBanner_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchBanner_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'source'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'banner_estimate'
// Member 'drone_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/SearchBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchBanner_Result
{
  /// true = banner classified
  bool success;
  rosidl_runtime_c__String message;
  /// local NED of the banner centre at detection time
  geometry_msgs__msg__Point banner_estimate;
  /// drone position when it was classified
  geometry_msgs__msg__Point drone_position;
  uint32_t waypoint_index;
  rosidl_runtime_c__String source;
} mission_interfaces__action__SearchBanner_Result;

// Struct for a sequence of mission_interfaces__action__SearchBanner_Result.
typedef struct mission_interfaces__action__SearchBanner_Result__Sequence
{
  mission_interfaces__action__SearchBanner_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchBanner_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SearchBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchBanner_Feedback
{
  rosidl_runtime_c__String state;
  uint32_t waypoint;
} mission_interfaces__action__SearchBanner_Feedback;

// Struct for a sequence of mission_interfaces__action__SearchBanner_Feedback.
typedef struct mission_interfaces__action__SearchBanner_Feedback__Sequence
{
  mission_interfaces__action__SearchBanner_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchBanner_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mission_interfaces/action/detail/search_banner__struct.h"

/// Struct defined in action/SearchBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchBanner_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__SearchBanner_Goal goal;
} mission_interfaces__action__SearchBanner_SendGoal_Request;

// Struct for a sequence of mission_interfaces__action__SearchBanner_SendGoal_Request.
typedef struct mission_interfaces__action__SearchBanner_SendGoal_Request__Sequence
{
  mission_interfaces__action__SearchBanner_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchBanner_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SearchBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchBanner_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mission_interfaces__action__SearchBanner_SendGoal_Response;

// Struct for a sequence of mission_interfaces__action__SearchBanner_SendGoal_Response.
typedef struct mission_interfaces__action__SearchBanner_SendGoal_Response__Sequence
{
  mission_interfaces__action__SearchBanner_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchBanner_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__SearchBanner_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__SearchBanner_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SearchBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchBanner_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__SearchBanner_SendGoal_Request__Sequence request;
  mission_interfaces__action__SearchBanner_SendGoal_Response__Sequence response;
} mission_interfaces__action__SearchBanner_SendGoal_Event;

// Struct for a sequence of mission_interfaces__action__SearchBanner_SendGoal_Event.
typedef struct mission_interfaces__action__SearchBanner_SendGoal_Event__Sequence
{
  mission_interfaces__action__SearchBanner_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchBanner_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SearchBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchBanner_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mission_interfaces__action__SearchBanner_GetResult_Request;

// Struct for a sequence of mission_interfaces__action__SearchBanner_GetResult_Request.
typedef struct mission_interfaces__action__SearchBanner_GetResult_Request__Sequence
{
  mission_interfaces__action__SearchBanner_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchBanner_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/search_banner__struct.h"

/// Struct defined in action/SearchBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchBanner_GetResult_Response
{
  int8_t status;
  mission_interfaces__action__SearchBanner_Result result;
} mission_interfaces__action__SearchBanner_GetResult_Response;

// Struct for a sequence of mission_interfaces__action__SearchBanner_GetResult_Response.
typedef struct mission_interfaces__action__SearchBanner_GetResult_Response__Sequence
{
  mission_interfaces__action__SearchBanner_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchBanner_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__SearchBanner_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__SearchBanner_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SearchBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchBanner_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__SearchBanner_GetResult_Request__Sequence request;
  mission_interfaces__action__SearchBanner_GetResult_Response__Sequence response;
} mission_interfaces__action__SearchBanner_GetResult_Event;

// Struct for a sequence of mission_interfaces__action__SearchBanner_GetResult_Event.
typedef struct mission_interfaces__action__SearchBanner_GetResult_Event__Sequence
{
  mission_interfaces__action__SearchBanner_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchBanner_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/search_banner__struct.h"

/// Struct defined in action/SearchBanner in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchBanner_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__SearchBanner_Feedback feedback;
} mission_interfaces__action__SearchBanner_FeedbackMessage;

// Struct for a sequence of mission_interfaces__action__SearchBanner_FeedbackMessage.
typedef struct mission_interfaces__action__SearchBanner_FeedbackMessage__Sequence
{
  mission_interfaces__action__SearchBanner_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchBanner_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__SEARCH_BANNER__STRUCT_H_
