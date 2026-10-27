// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mission_interfaces:action/PayloadDrop.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mission_interfaces/action/detail/payload_drop__functions.h"
#include "mission_interfaces/action/detail/payload_drop__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_Goal_type_support_ids_t;

static const _PayloadDrop_Goal_type_support_ids_t _PayloadDrop_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_Goal_type_support_symbol_names_t _PayloadDrop_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_Goal)),
  }
};

typedef struct _PayloadDrop_Goal_type_support_data_t
{
  void * data[2];
} _PayloadDrop_Goal_type_support_data_t;

static _PayloadDrop_Goal_type_support_data_t _PayloadDrop_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_Goal_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayloadDrop_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__PayloadDrop_Goal__get_type_hash,
  &mission_interfaces__action__PayloadDrop_Goal__get_type_description,
  &mission_interfaces__action__PayloadDrop_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::PayloadDrop_Goal>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_Goal)() {
  return get_message_type_support_handle<mission_interfaces::action::PayloadDrop_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__functions.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_Result_type_support_ids_t;

static const _PayloadDrop_Result_type_support_ids_t _PayloadDrop_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_Result_type_support_symbol_names_t _PayloadDrop_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_Result)),
  }
};

typedef struct _PayloadDrop_Result_type_support_data_t
{
  void * data[2];
} _PayloadDrop_Result_type_support_data_t;

static _PayloadDrop_Result_type_support_data_t _PayloadDrop_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_Result_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayloadDrop_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__PayloadDrop_Result__get_type_hash,
  &mission_interfaces__action__PayloadDrop_Result__get_type_description,
  &mission_interfaces__action__PayloadDrop_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::PayloadDrop_Result>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_Result)() {
  return get_message_type_support_handle<mission_interfaces::action::PayloadDrop_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__functions.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_Feedback_type_support_ids_t;

static const _PayloadDrop_Feedback_type_support_ids_t _PayloadDrop_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_Feedback_type_support_symbol_names_t _PayloadDrop_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_Feedback)),
  }
};

typedef struct _PayloadDrop_Feedback_type_support_data_t
{
  void * data[2];
} _PayloadDrop_Feedback_type_support_data_t;

static _PayloadDrop_Feedback_type_support_data_t _PayloadDrop_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_Feedback_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayloadDrop_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__PayloadDrop_Feedback__get_type_hash,
  &mission_interfaces__action__PayloadDrop_Feedback__get_type_description,
  &mission_interfaces__action__PayloadDrop_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::PayloadDrop_Feedback>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_Feedback)() {
  return get_message_type_support_handle<mission_interfaces::action::PayloadDrop_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__functions.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_SendGoal_Request_type_support_ids_t;

static const _PayloadDrop_SendGoal_Request_type_support_ids_t _PayloadDrop_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_SendGoal_Request_type_support_symbol_names_t _PayloadDrop_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_SendGoal_Request)),
  }
};

typedef struct _PayloadDrop_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PayloadDrop_SendGoal_Request_type_support_data_t;

static _PayloadDrop_SendGoal_Request_type_support_data_t _PayloadDrop_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_SendGoal_Request_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayloadDrop_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__PayloadDrop_SendGoal_Request__get_type_hash,
  &mission_interfaces__action__PayloadDrop_SendGoal_Request__get_type_description,
  &mission_interfaces__action__PayloadDrop_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal_Request>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_SendGoal_Request)() {
  return get_message_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__functions.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_SendGoal_Response_type_support_ids_t;

static const _PayloadDrop_SendGoal_Response_type_support_ids_t _PayloadDrop_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_SendGoal_Response_type_support_symbol_names_t _PayloadDrop_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_SendGoal_Response)),
  }
};

typedef struct _PayloadDrop_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PayloadDrop_SendGoal_Response_type_support_data_t;

static _PayloadDrop_SendGoal_Response_type_support_data_t _PayloadDrop_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_SendGoal_Response_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayloadDrop_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__PayloadDrop_SendGoal_Response__get_type_hash,
  &mission_interfaces__action__PayloadDrop_SendGoal_Response__get_type_description,
  &mission_interfaces__action__PayloadDrop_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal_Response>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_SendGoal_Response)() {
  return get_message_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__functions.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_SendGoal_Event_type_support_ids_t;

static const _PayloadDrop_SendGoal_Event_type_support_ids_t _PayloadDrop_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_SendGoal_Event_type_support_symbol_names_t _PayloadDrop_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_SendGoal_Event)),
  }
};

typedef struct _PayloadDrop_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _PayloadDrop_SendGoal_Event_type_support_data_t;

static _PayloadDrop_SendGoal_Event_type_support_data_t _PayloadDrop_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_SendGoal_Event_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayloadDrop_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__PayloadDrop_SendGoal_Event__get_type_hash,
  &mission_interfaces__action__PayloadDrop_SendGoal_Event__get_type_description,
  &mission_interfaces__action__PayloadDrop_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal_Event>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_SendGoal_Event)() {
  return get_message_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_SendGoal_type_support_ids_t;

static const _PayloadDrop_SendGoal_type_support_ids_t _PayloadDrop_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_SendGoal_type_support_symbol_names_t _PayloadDrop_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_SendGoal)),
  }
};

typedef struct _PayloadDrop_SendGoal_type_support_data_t
{
  void * data[2];
} _PayloadDrop_SendGoal_type_support_data_t;

static _PayloadDrop_SendGoal_type_support_data_t _PayloadDrop_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_SendGoal_service_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PayloadDrop_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mission_interfaces::action::PayloadDrop_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mission_interfaces::action::PayloadDrop_SendGoal>,
  &mission_interfaces__action__PayloadDrop_SendGoal__get_type_hash,
  &mission_interfaces__action__PayloadDrop_SendGoal__get_type_description,
  &mission_interfaces__action__PayloadDrop_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mission_interfaces::action::PayloadDrop_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__functions.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_GetResult_Request_type_support_ids_t;

static const _PayloadDrop_GetResult_Request_type_support_ids_t _PayloadDrop_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_GetResult_Request_type_support_symbol_names_t _PayloadDrop_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_GetResult_Request)),
  }
};

typedef struct _PayloadDrop_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PayloadDrop_GetResult_Request_type_support_data_t;

static _PayloadDrop_GetResult_Request_type_support_data_t _PayloadDrop_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_GetResult_Request_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayloadDrop_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__PayloadDrop_GetResult_Request__get_type_hash,
  &mission_interfaces__action__PayloadDrop_GetResult_Request__get_type_description,
  &mission_interfaces__action__PayloadDrop_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult_Request>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_GetResult_Request)() {
  return get_message_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__functions.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_GetResult_Response_type_support_ids_t;

static const _PayloadDrop_GetResult_Response_type_support_ids_t _PayloadDrop_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_GetResult_Response_type_support_symbol_names_t _PayloadDrop_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_GetResult_Response)),
  }
};

typedef struct _PayloadDrop_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PayloadDrop_GetResult_Response_type_support_data_t;

static _PayloadDrop_GetResult_Response_type_support_data_t _PayloadDrop_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_GetResult_Response_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayloadDrop_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__PayloadDrop_GetResult_Response__get_type_hash,
  &mission_interfaces__action__PayloadDrop_GetResult_Response__get_type_description,
  &mission_interfaces__action__PayloadDrop_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult_Response>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_GetResult_Response)() {
  return get_message_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__functions.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_GetResult_Event_type_support_ids_t;

static const _PayloadDrop_GetResult_Event_type_support_ids_t _PayloadDrop_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_GetResult_Event_type_support_symbol_names_t _PayloadDrop_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_GetResult_Event)),
  }
};

typedef struct _PayloadDrop_GetResult_Event_type_support_data_t
{
  void * data[2];
} _PayloadDrop_GetResult_Event_type_support_data_t;

static _PayloadDrop_GetResult_Event_type_support_data_t _PayloadDrop_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_GetResult_Event_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayloadDrop_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__PayloadDrop_GetResult_Event__get_type_hash,
  &mission_interfaces__action__PayloadDrop_GetResult_Event__get_type_description,
  &mission_interfaces__action__PayloadDrop_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult_Event>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_GetResult_Event)() {
  return get_message_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_GetResult_type_support_ids_t;

static const _PayloadDrop_GetResult_type_support_ids_t _PayloadDrop_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_GetResult_type_support_symbol_names_t _PayloadDrop_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_GetResult)),
  }
};

typedef struct _PayloadDrop_GetResult_type_support_data_t
{
  void * data[2];
} _PayloadDrop_GetResult_type_support_data_t;

static _PayloadDrop_GetResult_type_support_data_t _PayloadDrop_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_GetResult_service_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PayloadDrop_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mission_interfaces::action::PayloadDrop_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mission_interfaces::action::PayloadDrop_GetResult>,
  &mission_interfaces__action__PayloadDrop_GetResult__get_type_hash,
  &mission_interfaces__action__PayloadDrop_GetResult__get_type_description,
  &mission_interfaces__action__PayloadDrop_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mission_interfaces::action::PayloadDrop_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__functions.h"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PayloadDrop_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PayloadDrop_FeedbackMessage_type_support_ids_t;

static const _PayloadDrop_FeedbackMessage_type_support_ids_t _PayloadDrop_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PayloadDrop_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PayloadDrop_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PayloadDrop_FeedbackMessage_type_support_symbol_names_t _PayloadDrop_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, PayloadDrop_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, PayloadDrop_FeedbackMessage)),
  }
};

typedef struct _PayloadDrop_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PayloadDrop_FeedbackMessage_type_support_data_t;

static _PayloadDrop_FeedbackMessage_type_support_data_t _PayloadDrop_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PayloadDrop_FeedbackMessage_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_PayloadDrop_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PayloadDrop_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PayloadDrop_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PayloadDrop_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PayloadDrop_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__PayloadDrop_FeedbackMessage__get_type_hash,
  &mission_interfaces__action__PayloadDrop_FeedbackMessage__get_type_description,
  &mission_interfaces__action__PayloadDrop_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::PayloadDrop_FeedbackMessage>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop_FeedbackMessage)() {
  return get_message_type_support_handle<mission_interfaces::action::PayloadDrop_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "mission_interfaces/action/detail/payload_drop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace mission_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t PayloadDrop_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &mission_interfaces__action__PayloadDrop__get_type_hash,
  &mission_interfaces__action__PayloadDrop__get_type_description,
  &mission_interfaces__action__PayloadDrop__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<mission_interfaces::action::PayloadDrop>()
{
  using ::mission_interfaces::action::rosidl_typesupport_cpp::PayloadDrop_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  PayloadDrop_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::mission_interfaces::action::PayloadDrop::Impl::SendGoalService>();
  PayloadDrop_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::mission_interfaces::action::PayloadDrop::Impl::GetResultService>();
  PayloadDrop_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::mission_interfaces::action::PayloadDrop::Impl::CancelGoalService>();
  PayloadDrop_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::mission_interfaces::action::PayloadDrop::Impl::FeedbackMessage>();
  PayloadDrop_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::mission_interfaces::action::PayloadDrop::Impl::GoalStatusMessage>();
  return &PayloadDrop_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, PayloadDrop)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<mission_interfaces::action::PayloadDrop>();
}

#ifdef __cplusplus
}
#endif
