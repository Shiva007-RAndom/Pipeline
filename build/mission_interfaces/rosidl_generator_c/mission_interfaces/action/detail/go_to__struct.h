// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:action/GoTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/go_to.h"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__GO_TO__STRUCT_H_
#define MISSION_INTERFACES__ACTION__DETAIL__GO_TO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FRAME_LOCAL_NED'.
/**
  * x north, y east, z down (m), same frame as flight_controller's LocalPose (EKF origin)
  * NaN x/y/z = keep current (e.g. x=y=NaN, z=-10: climb to 10 m above origin)
 */
enum
{
  mission_interfaces__action__GoTo_Goal__FRAME_LOCAL_NED = 0
};

/// Constant 'FRAME_BODY_FLU'.
/**
  * offset from the current pose: x forward, y left, z up (m)
 */
enum
{
  mission_interfaces__action__GoTo_Goal__FRAME_BODY_FLU = 1
};

/// Struct defined in action/GoTo in the package mission_interfaces.
typedef struct mission_interfaces__action__GoTo_Goal
{
  uint8_t frame;
  float x;
  float y;
  float z;
  /// LOCAL_NED: absolute heading (rad, 0 = north, clockwise +)
  /// BODY_FLU: heading change (rad, counter-clockwise +); NaN = keep current
  float yaw;
  /// m/s; <= 0 uses the controller default
  float speed;
  /// m; <= 0 uses the controller default
  float acceptance_radius;
} mission_interfaces__action__GoTo_Goal;

// Struct for a sequence of mission_interfaces__action__GoTo_Goal.
typedef struct mission_interfaces__action__GoTo_Goal__Sequence
{
  mission_interfaces__action__GoTo_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__GoTo_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'final_position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/GoTo in the package mission_interfaces.
typedef struct mission_interfaces__action__GoTo_Result
{
  bool success;
  rosidl_runtime_c__String message;
  /// local NED
  geometry_msgs__msg__Point final_position;
} mission_interfaces__action__GoTo_Result;

// Struct for a sequence of mission_interfaces__action__GoTo_Result.
typedef struct mission_interfaces__action__GoTo_Result__Sequence
{
  mission_interfaces__action__GoTo_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__GoTo_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/GoTo in the package mission_interfaces.
typedef struct mission_interfaces__action__GoTo_Feedback
{
  /// m
  float distance_remaining;
} mission_interfaces__action__GoTo_Feedback;

// Struct for a sequence of mission_interfaces__action__GoTo_Feedback.
typedef struct mission_interfaces__action__GoTo_Feedback__Sequence
{
  mission_interfaces__action__GoTo_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__GoTo_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mission_interfaces/action/detail/go_to__struct.h"

/// Struct defined in action/GoTo in the package mission_interfaces.
typedef struct mission_interfaces__action__GoTo_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__GoTo_Goal goal;
} mission_interfaces__action__GoTo_SendGoal_Request;

// Struct for a sequence of mission_interfaces__action__GoTo_SendGoal_Request.
typedef struct mission_interfaces__action__GoTo_SendGoal_Request__Sequence
{
  mission_interfaces__action__GoTo_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__GoTo_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GoTo in the package mission_interfaces.
typedef struct mission_interfaces__action__GoTo_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mission_interfaces__action__GoTo_SendGoal_Response;

// Struct for a sequence of mission_interfaces__action__GoTo_SendGoal_Response.
typedef struct mission_interfaces__action__GoTo_SendGoal_Response__Sequence
{
  mission_interfaces__action__GoTo_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__GoTo_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__GoTo_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__GoTo_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/GoTo in the package mission_interfaces.
typedef struct mission_interfaces__action__GoTo_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__GoTo_SendGoal_Request__Sequence request;
  mission_interfaces__action__GoTo_SendGoal_Response__Sequence response;
} mission_interfaces__action__GoTo_SendGoal_Event;

// Struct for a sequence of mission_interfaces__action__GoTo_SendGoal_Event.
typedef struct mission_interfaces__action__GoTo_SendGoal_Event__Sequence
{
  mission_interfaces__action__GoTo_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__GoTo_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GoTo in the package mission_interfaces.
typedef struct mission_interfaces__action__GoTo_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mission_interfaces__action__GoTo_GetResult_Request;

// Struct for a sequence of mission_interfaces__action__GoTo_GetResult_Request.
typedef struct mission_interfaces__action__GoTo_GetResult_Request__Sequence
{
  mission_interfaces__action__GoTo_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__GoTo_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/go_to__struct.h"

/// Struct defined in action/GoTo in the package mission_interfaces.
typedef struct mission_interfaces__action__GoTo_GetResult_Response
{
  int8_t status;
  mission_interfaces__action__GoTo_Result result;
} mission_interfaces__action__GoTo_GetResult_Response;

// Struct for a sequence of mission_interfaces__action__GoTo_GetResult_Response.
typedef struct mission_interfaces__action__GoTo_GetResult_Response__Sequence
{
  mission_interfaces__action__GoTo_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__GoTo_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__GoTo_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__GoTo_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/GoTo in the package mission_interfaces.
typedef struct mission_interfaces__action__GoTo_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__GoTo_GetResult_Request__Sequence request;
  mission_interfaces__action__GoTo_GetResult_Response__Sequence response;
} mission_interfaces__action__GoTo_GetResult_Event;

// Struct for a sequence of mission_interfaces__action__GoTo_GetResult_Event.
typedef struct mission_interfaces__action__GoTo_GetResult_Event__Sequence
{
  mission_interfaces__action__GoTo_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__GoTo_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/go_to__struct.h"

/// Struct defined in action/GoTo in the package mission_interfaces.
typedef struct mission_interfaces__action__GoTo_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__GoTo_Feedback feedback;
} mission_interfaces__action__GoTo_FeedbackMessage;

// Struct for a sequence of mission_interfaces__action__GoTo_FeedbackMessage.
typedef struct mission_interfaces__action__GoTo_FeedbackMessage__Sequence
{
  mission_interfaces__action__GoTo_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__GoTo_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__GO_TO__STRUCT_H_
