// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:action/LawnmowerSearch.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/lawnmower_search.h"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__STRUCT_H_
#define MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/LawnmowerSearch in the package mission_interfaces.
typedef struct mission_interfaces__action__LawnmowerSearch_Goal
{
  /// local NED of the first row's start; z = search altitude (NED z)
  geometry_msgs__msg__Point start;
  /// rad, rows run along this heading
  float heading;
  /// m per row
  float length;
  /// m between rows, stepping to the RIGHT of `heading`
  float row_step;
  uint8_t rows;
  /// m/s; <= 0 = flight controller default
  float speed;
  /// m; <= 0 = flight controller default
  float waypoint_tolerance;
} mission_interfaces__action__LawnmowerSearch_Goal;

// Struct for a sequence of mission_interfaces__action__LawnmowerSearch_Goal.
typedef struct mission_interfaces__action__LawnmowerSearch_Goal__Sequence
{
  mission_interfaces__action__LawnmowerSearch_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__LawnmowerSearch_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'decoded_text'
#include "rosidl_runtime_c/string.h"
// Member 'target'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/LawnmowerSearch in the package mission_interfaces.
typedef struct mission_interfaces__action__LawnmowerSearch_Result
{
  /// true = matched QR found
  bool success;
  rosidl_runtime_c__String message;
  /// local NED of the matched QR centre, z = start.z
  geometry_msgs__msg__Point target;
  rosidl_runtime_c__String decoded_text;
  float score;
} mission_interfaces__action__LawnmowerSearch_Result;

// Struct for a sequence of mission_interfaces__action__LawnmowerSearch_Result.
typedef struct mission_interfaces__action__LawnmowerSearch_Result__Sequence
{
  mission_interfaces__action__LawnmowerSearch_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__LawnmowerSearch_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/LawnmowerSearch in the package mission_interfaces.
typedef struct mission_interfaces__action__LawnmowerSearch_Feedback
{
  uint32_t waypoint;
  rosidl_runtime_c__String state;
} mission_interfaces__action__LawnmowerSearch_Feedback;

// Struct for a sequence of mission_interfaces__action__LawnmowerSearch_Feedback.
typedef struct mission_interfaces__action__LawnmowerSearch_Feedback__Sequence
{
  mission_interfaces__action__LawnmowerSearch_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__LawnmowerSearch_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mission_interfaces/action/detail/lawnmower_search__struct.h"

/// Struct defined in action/LawnmowerSearch in the package mission_interfaces.
typedef struct mission_interfaces__action__LawnmowerSearch_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__LawnmowerSearch_Goal goal;
} mission_interfaces__action__LawnmowerSearch_SendGoal_Request;

// Struct for a sequence of mission_interfaces__action__LawnmowerSearch_SendGoal_Request.
typedef struct mission_interfaces__action__LawnmowerSearch_SendGoal_Request__Sequence
{
  mission_interfaces__action__LawnmowerSearch_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__LawnmowerSearch_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LawnmowerSearch in the package mission_interfaces.
typedef struct mission_interfaces__action__LawnmowerSearch_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mission_interfaces__action__LawnmowerSearch_SendGoal_Response;

// Struct for a sequence of mission_interfaces__action__LawnmowerSearch_SendGoal_Response.
typedef struct mission_interfaces__action__LawnmowerSearch_SendGoal_Response__Sequence
{
  mission_interfaces__action__LawnmowerSearch_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__LawnmowerSearch_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__LawnmowerSearch_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__LawnmowerSearch_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/LawnmowerSearch in the package mission_interfaces.
typedef struct mission_interfaces__action__LawnmowerSearch_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__LawnmowerSearch_SendGoal_Request__Sequence request;
  mission_interfaces__action__LawnmowerSearch_SendGoal_Response__Sequence response;
} mission_interfaces__action__LawnmowerSearch_SendGoal_Event;

// Struct for a sequence of mission_interfaces__action__LawnmowerSearch_SendGoal_Event.
typedef struct mission_interfaces__action__LawnmowerSearch_SendGoal_Event__Sequence
{
  mission_interfaces__action__LawnmowerSearch_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__LawnmowerSearch_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LawnmowerSearch in the package mission_interfaces.
typedef struct mission_interfaces__action__LawnmowerSearch_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mission_interfaces__action__LawnmowerSearch_GetResult_Request;

// Struct for a sequence of mission_interfaces__action__LawnmowerSearch_GetResult_Request.
typedef struct mission_interfaces__action__LawnmowerSearch_GetResult_Request__Sequence
{
  mission_interfaces__action__LawnmowerSearch_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__LawnmowerSearch_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.h"

/// Struct defined in action/LawnmowerSearch in the package mission_interfaces.
typedef struct mission_interfaces__action__LawnmowerSearch_GetResult_Response
{
  int8_t status;
  mission_interfaces__action__LawnmowerSearch_Result result;
} mission_interfaces__action__LawnmowerSearch_GetResult_Response;

// Struct for a sequence of mission_interfaces__action__LawnmowerSearch_GetResult_Response.
typedef struct mission_interfaces__action__LawnmowerSearch_GetResult_Response__Sequence
{
  mission_interfaces__action__LawnmowerSearch_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__LawnmowerSearch_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__LawnmowerSearch_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__LawnmowerSearch_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/LawnmowerSearch in the package mission_interfaces.
typedef struct mission_interfaces__action__LawnmowerSearch_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__LawnmowerSearch_GetResult_Request__Sequence request;
  mission_interfaces__action__LawnmowerSearch_GetResult_Response__Sequence response;
} mission_interfaces__action__LawnmowerSearch_GetResult_Event;

// Struct for a sequence of mission_interfaces__action__LawnmowerSearch_GetResult_Event.
typedef struct mission_interfaces__action__LawnmowerSearch_GetResult_Event__Sequence
{
  mission_interfaces__action__LawnmowerSearch_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__LawnmowerSearch_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.h"

/// Struct defined in action/LawnmowerSearch in the package mission_interfaces.
typedef struct mission_interfaces__action__LawnmowerSearch_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__LawnmowerSearch_Feedback feedback;
} mission_interfaces__action__LawnmowerSearch_FeedbackMessage;

// Struct for a sequence of mission_interfaces__action__LawnmowerSearch_FeedbackMessage.
typedef struct mission_interfaces__action__LawnmowerSearch_FeedbackMessage__Sequence
{
  mission_interfaces__action__LawnmowerSearch_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__LawnmowerSearch_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__LAWNMOWER_SEARCH__STRUCT_H_
