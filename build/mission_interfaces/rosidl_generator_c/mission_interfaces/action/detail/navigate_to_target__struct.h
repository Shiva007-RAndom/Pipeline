// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:action/NavigateToTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/navigate_to_target.h"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__STRUCT_H_
#define MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/NavigateToTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__NavigateToTarget_Goal
{
  double latitude;
  double longitude;
  /// local NED z to fly at (the search altitude)
  float z;
  /// rad; NaN = keep
  float yaw;
  /// m/s; <= 0 = default
  float speed;
  /// m, arrival check; <= 0 = node parameter (1.0)
  float tolerance;
} mission_interfaces__action__NavigateToTarget_Goal;

// Struct for a sequence of mission_interfaces__action__NavigateToTarget_Goal.
typedef struct mission_interfaces__action__NavigateToTarget_Goal__Sequence
{
  mission_interfaces__action__NavigateToTarget_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__NavigateToTarget_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'target'
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/NavigateToTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__NavigateToTarget_Result
{
  bool success;
  rosidl_runtime_c__String message;
  /// the waypoint in local NED
  geometry_msgs__msg__Point target;
  /// vehicle position on arrival
  geometry_msgs__msg__Point position;
  bool detoured;
} mission_interfaces__action__NavigateToTarget_Result;

// Struct for a sequence of mission_interfaces__action__NavigateToTarget_Result.
typedef struct mission_interfaces__action__NavigateToTarget_Result__Sequence
{
  mission_interfaces__action__NavigateToTarget_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__NavigateToTarget_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/NavigateToTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__NavigateToTarget_Feedback
{
  rosidl_runtime_c__String state;
  /// m to the waypoint
  float distance;
} mission_interfaces__action__NavigateToTarget_Feedback;

// Struct for a sequence of mission_interfaces__action__NavigateToTarget_Feedback.
typedef struct mission_interfaces__action__NavigateToTarget_Feedback__Sequence
{
  mission_interfaces__action__NavigateToTarget_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__NavigateToTarget_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mission_interfaces/action/detail/navigate_to_target__struct.h"

/// Struct defined in action/NavigateToTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__NavigateToTarget_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__NavigateToTarget_Goal goal;
} mission_interfaces__action__NavigateToTarget_SendGoal_Request;

// Struct for a sequence of mission_interfaces__action__NavigateToTarget_SendGoal_Request.
typedef struct mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence
{
  mission_interfaces__action__NavigateToTarget_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigateToTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__NavigateToTarget_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mission_interfaces__action__NavigateToTarget_SendGoal_Response;

// Struct for a sequence of mission_interfaces__action__NavigateToTarget_SendGoal_Response.
typedef struct mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence
{
  mission_interfaces__action__NavigateToTarget_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__NavigateToTarget_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__NavigateToTarget_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/NavigateToTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__NavigateToTarget_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence request;
  mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence response;
} mission_interfaces__action__NavigateToTarget_SendGoal_Event;

// Struct for a sequence of mission_interfaces__action__NavigateToTarget_SendGoal_Event.
typedef struct mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence
{
  mission_interfaces__action__NavigateToTarget_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigateToTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__NavigateToTarget_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mission_interfaces__action__NavigateToTarget_GetResult_Request;

// Struct for a sequence of mission_interfaces__action__NavigateToTarget_GetResult_Request.
typedef struct mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence
{
  mission_interfaces__action__NavigateToTarget_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/navigate_to_target__struct.h"

/// Struct defined in action/NavigateToTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__NavigateToTarget_GetResult_Response
{
  int8_t status;
  mission_interfaces__action__NavigateToTarget_Result result;
} mission_interfaces__action__NavigateToTarget_GetResult_Response;

// Struct for a sequence of mission_interfaces__action__NavigateToTarget_GetResult_Response.
typedef struct mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence
{
  mission_interfaces__action__NavigateToTarget_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__NavigateToTarget_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__NavigateToTarget_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/NavigateToTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__NavigateToTarget_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence request;
  mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence response;
} mission_interfaces__action__NavigateToTarget_GetResult_Event;

// Struct for a sequence of mission_interfaces__action__NavigateToTarget_GetResult_Event.
typedef struct mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence
{
  mission_interfaces__action__NavigateToTarget_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/navigate_to_target__struct.h"

/// Struct defined in action/NavigateToTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__NavigateToTarget_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__NavigateToTarget_Feedback feedback;
} mission_interfaces__action__NavigateToTarget_FeedbackMessage;

// Struct for a sequence of mission_interfaces__action__NavigateToTarget_FeedbackMessage.
typedef struct mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence
{
  mission_interfaces__action__NavigateToTarget_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__STRUCT_H_
