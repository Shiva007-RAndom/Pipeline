// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mission_interfaces:action/TraverseCorridor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mission_interfaces/action/detail/traverse_corridor__struct.h"
#include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
#include "mission_interfaces/action/detail/traverse_corridor__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TraverseCorridor_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_Goal_type_support_ids_t;

static const _TraverseCorridor_Goal_type_support_ids_t _TraverseCorridor_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_Goal_type_support_symbol_names_t _TraverseCorridor_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_Goal)),
  }
};

typedef struct _TraverseCorridor_Goal_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_Goal_type_support_data_t;

static _TraverseCorridor_Goal_type_support_data_t _TraverseCorridor_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_Goal_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TraverseCorridor_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mission_interfaces__action__TraverseCorridor_Goal__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_Goal__get_type_description,
  &mission_interfaces__action__TraverseCorridor_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_Goal)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TraverseCorridor_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_Result_type_support_ids_t;

static const _TraverseCorridor_Result_type_support_ids_t _TraverseCorridor_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_Result_type_support_symbol_names_t _TraverseCorridor_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_Result)),
  }
};

typedef struct _TraverseCorridor_Result_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_Result_type_support_data_t;

static _TraverseCorridor_Result_type_support_data_t _TraverseCorridor_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_Result_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_Result_message_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_Result_message_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TraverseCorridor_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mission_interfaces__action__TraverseCorridor_Result__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_Result__get_type_description,
  &mission_interfaces__action__TraverseCorridor_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_Result)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TraverseCorridor_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_Feedback_type_support_ids_t;

static const _TraverseCorridor_Feedback_type_support_ids_t _TraverseCorridor_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_Feedback_type_support_symbol_names_t _TraverseCorridor_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_Feedback)),
  }
};

typedef struct _TraverseCorridor_Feedback_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_Feedback_type_support_data_t;

static _TraverseCorridor_Feedback_type_support_data_t _TraverseCorridor_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_Feedback_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TraverseCorridor_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mission_interfaces__action__TraverseCorridor_Feedback__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_Feedback__get_type_description,
  &mission_interfaces__action__TraverseCorridor_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_Feedback)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TraverseCorridor_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_SendGoal_Request_type_support_ids_t;

static const _TraverseCorridor_SendGoal_Request_type_support_ids_t _TraverseCorridor_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_SendGoal_Request_type_support_symbol_names_t _TraverseCorridor_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_SendGoal_Request)),
  }
};

typedef struct _TraverseCorridor_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_SendGoal_Request_type_support_data_t;

static _TraverseCorridor_SendGoal_Request_type_support_data_t _TraverseCorridor_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_SendGoal_Request_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TraverseCorridor_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mission_interfaces__action__TraverseCorridor_SendGoal_Request__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_SendGoal_Request__get_type_description,
  &mission_interfaces__action__TraverseCorridor_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_SendGoal_Request)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TraverseCorridor_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_SendGoal_Response_type_support_ids_t;

static const _TraverseCorridor_SendGoal_Response_type_support_ids_t _TraverseCorridor_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_SendGoal_Response_type_support_symbol_names_t _TraverseCorridor_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_SendGoal_Response)),
  }
};

typedef struct _TraverseCorridor_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_SendGoal_Response_type_support_data_t;

static _TraverseCorridor_SendGoal_Response_type_support_data_t _TraverseCorridor_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_SendGoal_Response_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TraverseCorridor_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mission_interfaces__action__TraverseCorridor_SendGoal_Response__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_SendGoal_Response__get_type_description,
  &mission_interfaces__action__TraverseCorridor_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_SendGoal_Response)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TraverseCorridor_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_SendGoal_Event_type_support_ids_t;

static const _TraverseCorridor_SendGoal_Event_type_support_ids_t _TraverseCorridor_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_SendGoal_Event_type_support_symbol_names_t _TraverseCorridor_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_SendGoal_Event)),
  }
};

typedef struct _TraverseCorridor_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_SendGoal_Event_type_support_data_t;

static _TraverseCorridor_SendGoal_Event_type_support_data_t _TraverseCorridor_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_SendGoal_Event_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TraverseCorridor_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mission_interfaces__action__TraverseCorridor_SendGoal_Event__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_SendGoal_Event__get_type_description,
  &mission_interfaces__action__TraverseCorridor_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_SendGoal_Event)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _TraverseCorridor_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_SendGoal_type_support_ids_t;

static const _TraverseCorridor_SendGoal_type_support_ids_t _TraverseCorridor_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_SendGoal_type_support_symbol_names_t _TraverseCorridor_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_SendGoal)),
  }
};

typedef struct _TraverseCorridor_SendGoal_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_SendGoal_type_support_data_t;

static _TraverseCorridor_SendGoal_type_support_data_t _TraverseCorridor_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_SendGoal_service_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TraverseCorridor_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &TraverseCorridor_SendGoal_Request_message_type_support_handle,
  &TraverseCorridor_SendGoal_Response_message_type_support_handle,
  &TraverseCorridor_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mission_interfaces,
    action,
    TraverseCorridor_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mission_interfaces,
    action,
    TraverseCorridor_SendGoal
  ),
  &mission_interfaces__action__TraverseCorridor_SendGoal__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_SendGoal__get_type_description,
  &mission_interfaces__action__TraverseCorridor_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_SendGoal)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TraverseCorridor_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_GetResult_Request_type_support_ids_t;

static const _TraverseCorridor_GetResult_Request_type_support_ids_t _TraverseCorridor_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_GetResult_Request_type_support_symbol_names_t _TraverseCorridor_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_GetResult_Request)),
  }
};

typedef struct _TraverseCorridor_GetResult_Request_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_GetResult_Request_type_support_data_t;

static _TraverseCorridor_GetResult_Request_type_support_data_t _TraverseCorridor_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_GetResult_Request_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TraverseCorridor_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mission_interfaces__action__TraverseCorridor_GetResult_Request__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_GetResult_Request__get_type_description,
  &mission_interfaces__action__TraverseCorridor_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_GetResult_Request)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TraverseCorridor_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_GetResult_Response_type_support_ids_t;

static const _TraverseCorridor_GetResult_Response_type_support_ids_t _TraverseCorridor_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_GetResult_Response_type_support_symbol_names_t _TraverseCorridor_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_GetResult_Response)),
  }
};

typedef struct _TraverseCorridor_GetResult_Response_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_GetResult_Response_type_support_data_t;

static _TraverseCorridor_GetResult_Response_type_support_data_t _TraverseCorridor_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_GetResult_Response_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TraverseCorridor_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mission_interfaces__action__TraverseCorridor_GetResult_Response__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_GetResult_Response__get_type_description,
  &mission_interfaces__action__TraverseCorridor_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_GetResult_Response)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TraverseCorridor_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_GetResult_Event_type_support_ids_t;

static const _TraverseCorridor_GetResult_Event_type_support_ids_t _TraverseCorridor_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_GetResult_Event_type_support_symbol_names_t _TraverseCorridor_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_GetResult_Event)),
  }
};

typedef struct _TraverseCorridor_GetResult_Event_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_GetResult_Event_type_support_data_t;

static _TraverseCorridor_GetResult_Event_type_support_data_t _TraverseCorridor_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_GetResult_Event_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TraverseCorridor_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mission_interfaces__action__TraverseCorridor_GetResult_Event__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_GetResult_Event__get_type_description,
  &mission_interfaces__action__TraverseCorridor_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_GetResult_Event)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _TraverseCorridor_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_GetResult_type_support_ids_t;

static const _TraverseCorridor_GetResult_type_support_ids_t _TraverseCorridor_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_GetResult_type_support_symbol_names_t _TraverseCorridor_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_GetResult)),
  }
};

typedef struct _TraverseCorridor_GetResult_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_GetResult_type_support_data_t;

static _TraverseCorridor_GetResult_type_support_data_t _TraverseCorridor_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_GetResult_service_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TraverseCorridor_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &TraverseCorridor_GetResult_Request_message_type_support_handle,
  &TraverseCorridor_GetResult_Response_message_type_support_handle,
  &TraverseCorridor_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mission_interfaces,
    action,
    TraverseCorridor_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mission_interfaces,
    action,
    TraverseCorridor_GetResult
  ),
  &mission_interfaces__action__TraverseCorridor_GetResult__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_GetResult__get_type_description,
  &mission_interfaces__action__TraverseCorridor_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_GetResult)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__struct.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TraverseCorridor_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TraverseCorridor_FeedbackMessage_type_support_ids_t;

static const _TraverseCorridor_FeedbackMessage_type_support_ids_t _TraverseCorridor_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TraverseCorridor_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TraverseCorridor_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TraverseCorridor_FeedbackMessage_type_support_symbol_names_t _TraverseCorridor_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, action, TraverseCorridor_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, action, TraverseCorridor_FeedbackMessage)),
  }
};

typedef struct _TraverseCorridor_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _TraverseCorridor_FeedbackMessage_type_support_data_t;

static _TraverseCorridor_FeedbackMessage_type_support_data_t _TraverseCorridor_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TraverseCorridor_FeedbackMessage_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_TraverseCorridor_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_TraverseCorridor_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_TraverseCorridor_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TraverseCorridor_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TraverseCorridor_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &mission_interfaces__action__TraverseCorridor_FeedbackMessage__get_type_hash,
  &mission_interfaces__action__TraverseCorridor_FeedbackMessage__get_type_description,
  &mission_interfaces__action__TraverseCorridor_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace mission_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_FeedbackMessage)() {
  return &::mission_interfaces::action::rosidl_typesupport_c::TraverseCorridor_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "mission_interfaces/action/traverse_corridor.h"
// already included above
// #include "mission_interfaces/action/detail/traverse_corridor__type_support.h"

static rosidl_action_type_support_t _mission_interfaces__action__TraverseCorridor__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &mission_interfaces__action__TraverseCorridor__get_type_hash,
  &mission_interfaces__action__TraverseCorridor__get_type_description,
  &mission_interfaces__action__TraverseCorridor__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor)()
{
  // Thread-safe by always writing the same values to the static struct
  _mission_interfaces__action__TraverseCorridor__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_SendGoal)();
  _mission_interfaces__action__TraverseCorridor__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_GetResult)();
  _mission_interfaces__action__TraverseCorridor__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _mission_interfaces__action__TraverseCorridor__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, mission_interfaces, action, TraverseCorridor_FeedbackMessage)();
  _mission_interfaces__action__TraverseCorridor__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_mission_interfaces__action__TraverseCorridor__typesupport_c;
}

#ifdef __cplusplus
}
#endif
