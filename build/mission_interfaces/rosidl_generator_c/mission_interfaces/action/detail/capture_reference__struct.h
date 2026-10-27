// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:action/CaptureReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/capture_reference.h"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__CAPTURE_REFERENCE__STRUCT_H_
#define MISSION_INTERFACES__ACTION__DETAIL__CAPTURE_REFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/CaptureReference in the package mission_interfaces.
typedef struct mission_interfaces__action__CaptureReference_Goal
{
  uint8_t structure_needs_at_least_one_member;
} mission_interfaces__action__CaptureReference_Goal;

// Struct for a sequence of mission_interfaces__action__CaptureReference_Goal.
typedef struct mission_interfaces__action__CaptureReference_Goal__Sequence
{
  mission_interfaces__action__CaptureReference_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__CaptureReference_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'image_path'
// Member 'decoded_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/CaptureReference in the package mission_interfaces.
typedef struct mission_interfaces__action__CaptureReference_Result
{
  bool success;
  rosidl_runtime_c__String message;
  /// saved warp of the captured QR ("" if saving failed)
  rosidl_runtime_c__String image_path;
  rosidl_runtime_c__String decoded_text;
} mission_interfaces__action__CaptureReference_Result;

// Struct for a sequence of mission_interfaces__action__CaptureReference_Result.
typedef struct mission_interfaces__action__CaptureReference_Result__Sequence
{
  mission_interfaces__action__CaptureReference_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__CaptureReference_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/CaptureReference in the package mission_interfaces.
typedef struct mission_interfaces__action__CaptureReference_Feedback
{
  /// s since the goal started
  float elapsed;
} mission_interfaces__action__CaptureReference_Feedback;

// Struct for a sequence of mission_interfaces__action__CaptureReference_Feedback.
typedef struct mission_interfaces__action__CaptureReference_Feedback__Sequence
{
  mission_interfaces__action__CaptureReference_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__CaptureReference_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mission_interfaces/action/detail/capture_reference__struct.h"

/// Struct defined in action/CaptureReference in the package mission_interfaces.
typedef struct mission_interfaces__action__CaptureReference_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__CaptureReference_Goal goal;
} mission_interfaces__action__CaptureReference_SendGoal_Request;

// Struct for a sequence of mission_interfaces__action__CaptureReference_SendGoal_Request.
typedef struct mission_interfaces__action__CaptureReference_SendGoal_Request__Sequence
{
  mission_interfaces__action__CaptureReference_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__CaptureReference_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CaptureReference in the package mission_interfaces.
typedef struct mission_interfaces__action__CaptureReference_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mission_interfaces__action__CaptureReference_SendGoal_Response;

// Struct for a sequence of mission_interfaces__action__CaptureReference_SendGoal_Response.
typedef struct mission_interfaces__action__CaptureReference_SendGoal_Response__Sequence
{
  mission_interfaces__action__CaptureReference_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__CaptureReference_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__CaptureReference_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__CaptureReference_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/CaptureReference in the package mission_interfaces.
typedef struct mission_interfaces__action__CaptureReference_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__CaptureReference_SendGoal_Request__Sequence request;
  mission_interfaces__action__CaptureReference_SendGoal_Response__Sequence response;
} mission_interfaces__action__CaptureReference_SendGoal_Event;

// Struct for a sequence of mission_interfaces__action__CaptureReference_SendGoal_Event.
typedef struct mission_interfaces__action__CaptureReference_SendGoal_Event__Sequence
{
  mission_interfaces__action__CaptureReference_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__CaptureReference_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CaptureReference in the package mission_interfaces.
typedef struct mission_interfaces__action__CaptureReference_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mission_interfaces__action__CaptureReference_GetResult_Request;

// Struct for a sequence of mission_interfaces__action__CaptureReference_GetResult_Request.
typedef struct mission_interfaces__action__CaptureReference_GetResult_Request__Sequence
{
  mission_interfaces__action__CaptureReference_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__CaptureReference_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/capture_reference__struct.h"

/// Struct defined in action/CaptureReference in the package mission_interfaces.
typedef struct mission_interfaces__action__CaptureReference_GetResult_Response
{
  int8_t status;
  mission_interfaces__action__CaptureReference_Result result;
} mission_interfaces__action__CaptureReference_GetResult_Response;

// Struct for a sequence of mission_interfaces__action__CaptureReference_GetResult_Response.
typedef struct mission_interfaces__action__CaptureReference_GetResult_Response__Sequence
{
  mission_interfaces__action__CaptureReference_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__CaptureReference_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__CaptureReference_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__CaptureReference_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/CaptureReference in the package mission_interfaces.
typedef struct mission_interfaces__action__CaptureReference_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__CaptureReference_GetResult_Request__Sequence request;
  mission_interfaces__action__CaptureReference_GetResult_Response__Sequence response;
} mission_interfaces__action__CaptureReference_GetResult_Event;

// Struct for a sequence of mission_interfaces__action__CaptureReference_GetResult_Event.
typedef struct mission_interfaces__action__CaptureReference_GetResult_Event__Sequence
{
  mission_interfaces__action__CaptureReference_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__CaptureReference_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/capture_reference__struct.h"

/// Struct defined in action/CaptureReference in the package mission_interfaces.
typedef struct mission_interfaces__action__CaptureReference_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__CaptureReference_Feedback feedback;
} mission_interfaces__action__CaptureReference_FeedbackMessage;

// Struct for a sequence of mission_interfaces__action__CaptureReference_FeedbackMessage.
typedef struct mission_interfaces__action__CaptureReference_FeedbackMessage__Sequence
{
  mission_interfaces__action__CaptureReference_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__CaptureReference_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__CAPTURE_REFERENCE__STRUCT_H_
