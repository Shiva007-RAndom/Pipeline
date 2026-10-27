// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:action/TraverseCorridor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/traverse_corridor.h"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__TRAVERSE_CORRIDOR__STRUCT_H_
#define MISSION_INTERFACES__ACTION__DETAIL__TRAVERSE_CORRIDOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'entry'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/TraverseCorridor in the package mission_interfaces.
typedef struct mission_interfaces__action__TraverseCorridor_Goal
{
  /// local NED x, y of the corridor entrance (banner); z ignored
  geometry_msgs__msg__Point entry;
  /// rad
  float heading;
  /// local NED z inside the corridor (negative = above origin)
  float altitude_z;
  /// m
  float length;
  /// m/s for the surge
  float speed;
  /// s hover after the descent
  float settle_time;
  /// local NED z to climb to vertically at the exit; NaN = stay at corridor altitude
  float exit_altitude_z;
} mission_interfaces__action__TraverseCorridor_Goal;

// Struct for a sequence of mission_interfaces__action__TraverseCorridor_Goal.
typedef struct mission_interfaces__action__TraverseCorridor_Goal__Sequence
{
  mission_interfaces__action__TraverseCorridor_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__TraverseCorridor_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'exit_position'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/TraverseCorridor in the package mission_interfaces.
typedef struct mission_interfaces__action__TraverseCorridor_Result
{
  bool success;
  rosidl_runtime_c__String message;
  /// where the vehicle is when the action ends (after the climb)
  geometry_msgs__msg__Point exit_position;
} mission_interfaces__action__TraverseCorridor_Result;

// Struct for a sequence of mission_interfaces__action__TraverseCorridor_Result.
typedef struct mission_interfaces__action__TraverseCorridor_Result__Sequence
{
  mission_interfaces__action__TraverseCorridor_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__TraverseCorridor_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/TraverseCorridor in the package mission_interfaces.
typedef struct mission_interfaces__action__TraverseCorridor_Feedback
{
  /// descending | settling | surging | climbing
  rosidl_runtime_c__String state;
} mission_interfaces__action__TraverseCorridor_Feedback;

// Struct for a sequence of mission_interfaces__action__TraverseCorridor_Feedback.
typedef struct mission_interfaces__action__TraverseCorridor_Feedback__Sequence
{
  mission_interfaces__action__TraverseCorridor_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__TraverseCorridor_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mission_interfaces/action/detail/traverse_corridor__struct.h"

/// Struct defined in action/TraverseCorridor in the package mission_interfaces.
typedef struct mission_interfaces__action__TraverseCorridor_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__TraverseCorridor_Goal goal;
} mission_interfaces__action__TraverseCorridor_SendGoal_Request;

// Struct for a sequence of mission_interfaces__action__TraverseCorridor_SendGoal_Request.
typedef struct mission_interfaces__action__TraverseCorridor_SendGoal_Request__Sequence
{
  mission_interfaces__action__TraverseCorridor_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__TraverseCorridor_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/TraverseCorridor in the package mission_interfaces.
typedef struct mission_interfaces__action__TraverseCorridor_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mission_interfaces__action__TraverseCorridor_SendGoal_Response;

// Struct for a sequence of mission_interfaces__action__TraverseCorridor_SendGoal_Response.
typedef struct mission_interfaces__action__TraverseCorridor_SendGoal_Response__Sequence
{
  mission_interfaces__action__TraverseCorridor_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__TraverseCorridor_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__TraverseCorridor_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__TraverseCorridor_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/TraverseCorridor in the package mission_interfaces.
typedef struct mission_interfaces__action__TraverseCorridor_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__TraverseCorridor_SendGoal_Request__Sequence request;
  mission_interfaces__action__TraverseCorridor_SendGoal_Response__Sequence response;
} mission_interfaces__action__TraverseCorridor_SendGoal_Event;

// Struct for a sequence of mission_interfaces__action__TraverseCorridor_SendGoal_Event.
typedef struct mission_interfaces__action__TraverseCorridor_SendGoal_Event__Sequence
{
  mission_interfaces__action__TraverseCorridor_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__TraverseCorridor_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/TraverseCorridor in the package mission_interfaces.
typedef struct mission_interfaces__action__TraverseCorridor_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mission_interfaces__action__TraverseCorridor_GetResult_Request;

// Struct for a sequence of mission_interfaces__action__TraverseCorridor_GetResult_Request.
typedef struct mission_interfaces__action__TraverseCorridor_GetResult_Request__Sequence
{
  mission_interfaces__action__TraverseCorridor_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__TraverseCorridor_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"

/// Struct defined in action/TraverseCorridor in the package mission_interfaces.
typedef struct mission_interfaces__action__TraverseCorridor_GetResult_Response
{
  int8_t status;
  mission_interfaces__action__TraverseCorridor_Result result;
} mission_interfaces__action__TraverseCorridor_GetResult_Response;

// Struct for a sequence of mission_interfaces__action__TraverseCorridor_GetResult_Response.
typedef struct mission_interfaces__action__TraverseCorridor_GetResult_Response__Sequence
{
  mission_interfaces__action__TraverseCorridor_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__TraverseCorridor_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__TraverseCorridor_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__TraverseCorridor_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/TraverseCorridor in the package mission_interfaces.
typedef struct mission_interfaces__action__TraverseCorridor_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__TraverseCorridor_GetResult_Request__Sequence request;
  mission_interfaces__action__TraverseCorridor_GetResult_Response__Sequence response;
} mission_interfaces__action__TraverseCorridor_GetResult_Event;

// Struct for a sequence of mission_interfaces__action__TraverseCorridor_GetResult_Event.
typedef struct mission_interfaces__action__TraverseCorridor_GetResult_Event__Sequence
{
  mission_interfaces__action__TraverseCorridor_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__TraverseCorridor_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"

/// Struct defined in action/TraverseCorridor in the package mission_interfaces.
typedef struct mission_interfaces__action__TraverseCorridor_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__TraverseCorridor_Feedback feedback;
} mission_interfaces__action__TraverseCorridor_FeedbackMessage;

// Struct for a sequence of mission_interfaces__action__TraverseCorridor_FeedbackMessage.
typedef struct mission_interfaces__action__TraverseCorridor_FeedbackMessage__Sequence
{
  mission_interfaces__action__TraverseCorridor_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__TraverseCorridor_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__TRAVERSE_CORRIDOR__STRUCT_H_
