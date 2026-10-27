// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mission_interfaces:action/SearchTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/search_target.h"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__SEARCH_TARGET__STRUCT_H_
#define MISSION_INTERFACES__ACTION__DETAIL__SEARCH_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'geofence_file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/SearchTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchTarget_Goal
{
  /// text file, one "lat,lon" corner of the delivery zone per line
  rosidl_runtime_c__String geofence_file;
  /// m above the take-off point
  float altitude;
  /// heading held during the search (rad); NaN = "wide ahead": the camera's long
  /// image side along the rows, so red is seen further ahead
  float yaw;
  /// m the flight area is shrunk inwards from the geofence rectangle
  float wall_margin;
  /// overlap of neighbouring rows' footprints, 0..1
  float overlap;
  /// 0 = as many as it takes to cover the zone
  uint8_t rows;
  /// m/s
  float speed;
  /// m kept from any red
  float red_zone_margin;
  /// matched detections of the same QR needed (repo: 2)
  uint8_t confirm_matches;
  /// fly over ground the camera missed (e.g. skipped by a detour); 0 = off
  uint16_t max_revisits;
  /// s budget for the revisits
  float revisit_time;
  /// true: stop after choosing the QR and report it (target_navigator flies there);
  /// false: fly to it round the red before reporting (as before)
  bool skip_fly_to_target;
} mission_interfaces__action__SearchTarget_Goal;

// Struct for a sequence of mission_interfaces__action__SearchTarget_Goal.
typedef struct mission_interfaces__action__SearchTarget_Goal__Sequence
{
  mission_interfaces__action__SearchTarget_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchTarget_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// Member 'decoded_text'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'target'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/SearchTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchTarget_Result
{
  bool success;
  rosidl_runtime_c__String message;
  /// true = matched QR; false = best candidate
  bool matched;
  float score;
  rosidl_runtime_c__String decoded_text;
  /// local NED of the chosen QR (z = the search altitude's NED z)
  geometry_msgs__msg__Point target;
  /// the chosen QR's lat/lon (from the local frame's origin), for target_navigator
  double latitude;
  double longitude;
  /// separate red patches in the map
  uint16_t red_zones;
  /// fraction of the flight area the camera has looked at
  float coverage;
} mission_interfaces__action__SearchTarget_Result;

// Struct for a sequence of mission_interfaces__action__SearchTarget_Result.
typedef struct mission_interfaces__action__SearchTarget_Result__Sequence
{
  mission_interfaces__action__SearchTarget_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchTarget_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'state'
// Member 'steering'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SearchTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchTarget_Feedback
{
  rosidl_runtime_c__String state;
  /// direct | detour | escape | blocked
  rosidl_runtime_c__String steering;
  float best_score;
  uint16_t red_zones;
} mission_interfaces__action__SearchTarget_Feedback;

// Struct for a sequence of mission_interfaces__action__SearchTarget_Feedback.
typedef struct mission_interfaces__action__SearchTarget_Feedback__Sequence
{
  mission_interfaces__action__SearchTarget_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchTarget_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mission_interfaces/action/detail/search_target__struct.h"

/// Struct defined in action/SearchTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchTarget_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__SearchTarget_Goal goal;
} mission_interfaces__action__SearchTarget_SendGoal_Request;

// Struct for a sequence of mission_interfaces__action__SearchTarget_SendGoal_Request.
typedef struct mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence
{
  mission_interfaces__action__SearchTarget_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SearchTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchTarget_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mission_interfaces__action__SearchTarget_SendGoal_Response;

// Struct for a sequence of mission_interfaces__action__SearchTarget_SendGoal_Response.
typedef struct mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence
{
  mission_interfaces__action__SearchTarget_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__SearchTarget_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__SearchTarget_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SearchTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchTarget_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence request;
  mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence response;
} mission_interfaces__action__SearchTarget_SendGoal_Event;

// Struct for a sequence of mission_interfaces__action__SearchTarget_SendGoal_Event.
typedef struct mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence
{
  mission_interfaces__action__SearchTarget_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SearchTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchTarget_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mission_interfaces__action__SearchTarget_GetResult_Request;

// Struct for a sequence of mission_interfaces__action__SearchTarget_GetResult_Request.
typedef struct mission_interfaces__action__SearchTarget_GetResult_Request__Sequence
{
  mission_interfaces__action__SearchTarget_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchTarget_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mission_interfaces/action/detail/search_target__struct.h"

/// Struct defined in action/SearchTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchTarget_GetResult_Response
{
  int8_t status;
  mission_interfaces__action__SearchTarget_Result result;
} mission_interfaces__action__SearchTarget_GetResult_Response;

// Struct for a sequence of mission_interfaces__action__SearchTarget_GetResult_Response.
typedef struct mission_interfaces__action__SearchTarget_GetResult_Response__Sequence
{
  mission_interfaces__action__SearchTarget_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchTarget_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mission_interfaces__action__SearchTarget_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mission_interfaces__action__SearchTarget_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SearchTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchTarget_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mission_interfaces__action__SearchTarget_GetResult_Request__Sequence request;
  mission_interfaces__action__SearchTarget_GetResult_Response__Sequence response;
} mission_interfaces__action__SearchTarget_GetResult_Event;

// Struct for a sequence of mission_interfaces__action__SearchTarget_GetResult_Event.
typedef struct mission_interfaces__action__SearchTarget_GetResult_Event__Sequence
{
  mission_interfaces__action__SearchTarget_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchTarget_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mission_interfaces/action/detail/search_target__struct.h"

/// Struct defined in action/SearchTarget in the package mission_interfaces.
typedef struct mission_interfaces__action__SearchTarget_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mission_interfaces__action__SearchTarget_Feedback feedback;
} mission_interfaces__action__SearchTarget_FeedbackMessage;

// Struct for a sequence of mission_interfaces__action__SearchTarget_FeedbackMessage.
typedef struct mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence
{
  mission_interfaces__action__SearchTarget_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__SEARCH_TARGET__STRUCT_H_
