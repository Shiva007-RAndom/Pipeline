// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mission_interfaces:action/LawnmowerSearch.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mission_interfaces/action/detail/lawnmower_search__functions.h"
#include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_Goal_type_support_ids_t;

static const _LawnmowerSearch_Goal_type_support_ids_t _LawnmowerSearch_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_Goal_type_support_symbol_names_t _LawnmowerSearch_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_Goal)),
  }
};

typedef struct _LawnmowerSearch_Goal_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_Goal_type_support_data_t;

static _LawnmowerSearch_Goal_type_support_data_t _LawnmowerSearch_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_Goal_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LawnmowerSearch_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__LawnmowerSearch_Goal__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_Goal__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_Goal>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_Goal)() {
  return get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_Goal>();
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
// #include "mission_interfaces/action/detail/lawnmower_search__functions.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_Result_type_support_ids_t;

static const _LawnmowerSearch_Result_type_support_ids_t _LawnmowerSearch_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_Result_type_support_symbol_names_t _LawnmowerSearch_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_Result)),
  }
};

typedef struct _LawnmowerSearch_Result_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_Result_type_support_data_t;

static _LawnmowerSearch_Result_type_support_data_t _LawnmowerSearch_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_Result_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_Result_message_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_Result_message_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LawnmowerSearch_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__LawnmowerSearch_Result__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_Result__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_Result>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_Result)() {
  return get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_Result>();
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
// #include "mission_interfaces/action/detail/lawnmower_search__functions.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_Feedback_type_support_ids_t;

static const _LawnmowerSearch_Feedback_type_support_ids_t _LawnmowerSearch_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_Feedback_type_support_symbol_names_t _LawnmowerSearch_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_Feedback)),
  }
};

typedef struct _LawnmowerSearch_Feedback_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_Feedback_type_support_data_t;

static _LawnmowerSearch_Feedback_type_support_data_t _LawnmowerSearch_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_Feedback_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LawnmowerSearch_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__LawnmowerSearch_Feedback__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_Feedback__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_Feedback>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_Feedback)() {
  return get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_Feedback>();
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
// #include "mission_interfaces/action/detail/lawnmower_search__functions.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_SendGoal_Request_type_support_ids_t;

static const _LawnmowerSearch_SendGoal_Request_type_support_ids_t _LawnmowerSearch_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_SendGoal_Request_type_support_symbol_names_t _LawnmowerSearch_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal_Request)),
  }
};

typedef struct _LawnmowerSearch_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_SendGoal_Request_type_support_data_t;

static _LawnmowerSearch_SendGoal_Request_type_support_data_t _LawnmowerSearch_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_SendGoal_Request_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LawnmowerSearch_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__LawnmowerSearch_SendGoal_Request__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_SendGoal_Request__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal_Request)() {
  return get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>();
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
// #include "mission_interfaces/action/detail/lawnmower_search__functions.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_SendGoal_Response_type_support_ids_t;

static const _LawnmowerSearch_SendGoal_Response_type_support_ids_t _LawnmowerSearch_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_SendGoal_Response_type_support_symbol_names_t _LawnmowerSearch_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal_Response)),
  }
};

typedef struct _LawnmowerSearch_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_SendGoal_Response_type_support_data_t;

static _LawnmowerSearch_SendGoal_Response_type_support_data_t _LawnmowerSearch_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_SendGoal_Response_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LawnmowerSearch_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__LawnmowerSearch_SendGoal_Response__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_SendGoal_Response__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal_Response)() {
  return get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>();
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
// #include "mission_interfaces/action/detail/lawnmower_search__functions.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_SendGoal_Event_type_support_ids_t;

static const _LawnmowerSearch_SendGoal_Event_type_support_ids_t _LawnmowerSearch_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_SendGoal_Event_type_support_symbol_names_t _LawnmowerSearch_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal_Event)),
  }
};

typedef struct _LawnmowerSearch_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_SendGoal_Event_type_support_data_t;

static _LawnmowerSearch_SendGoal_Event_type_support_data_t _LawnmowerSearch_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_SendGoal_Event_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LawnmowerSearch_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__LawnmowerSearch_SendGoal_Event__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_SendGoal_Event__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal_Event>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal_Event)() {
  return get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal_Event>();
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
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_SendGoal_type_support_ids_t;

static const _LawnmowerSearch_SendGoal_type_support_ids_t _LawnmowerSearch_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_SendGoal_type_support_symbol_names_t _LawnmowerSearch_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal)),
  }
};

typedef struct _LawnmowerSearch_SendGoal_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_SendGoal_type_support_data_t;

static _LawnmowerSearch_SendGoal_type_support_data_t _LawnmowerSearch_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_SendGoal_service_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LawnmowerSearch_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mission_interfaces::action::LawnmowerSearch_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mission_interfaces::action::LawnmowerSearch_SendGoal>,
  &mission_interfaces__action__LawnmowerSearch_SendGoal__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_SendGoal__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mission_interfaces::action::LawnmowerSearch_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__functions.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_GetResult_Request_type_support_ids_t;

static const _LawnmowerSearch_GetResult_Request_type_support_ids_t _LawnmowerSearch_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_GetResult_Request_type_support_symbol_names_t _LawnmowerSearch_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_GetResult_Request)),
  }
};

typedef struct _LawnmowerSearch_GetResult_Request_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_GetResult_Request_type_support_data_t;

static _LawnmowerSearch_GetResult_Request_type_support_data_t _LawnmowerSearch_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_GetResult_Request_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LawnmowerSearch_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__LawnmowerSearch_GetResult_Request__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_GetResult_Request__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult_Request>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_GetResult_Request)() {
  return get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult_Request>();
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
// #include "mission_interfaces/action/detail/lawnmower_search__functions.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_GetResult_Response_type_support_ids_t;

static const _LawnmowerSearch_GetResult_Response_type_support_ids_t _LawnmowerSearch_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_GetResult_Response_type_support_symbol_names_t _LawnmowerSearch_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_GetResult_Response)),
  }
};

typedef struct _LawnmowerSearch_GetResult_Response_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_GetResult_Response_type_support_data_t;

static _LawnmowerSearch_GetResult_Response_type_support_data_t _LawnmowerSearch_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_GetResult_Response_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LawnmowerSearch_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__LawnmowerSearch_GetResult_Response__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_GetResult_Response__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult_Response>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_GetResult_Response)() {
  return get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult_Response>();
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
// #include "mission_interfaces/action/detail/lawnmower_search__functions.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_GetResult_Event_type_support_ids_t;

static const _LawnmowerSearch_GetResult_Event_type_support_ids_t _LawnmowerSearch_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_GetResult_Event_type_support_symbol_names_t _LawnmowerSearch_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_GetResult_Event)),
  }
};

typedef struct _LawnmowerSearch_GetResult_Event_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_GetResult_Event_type_support_data_t;

static _LawnmowerSearch_GetResult_Event_type_support_data_t _LawnmowerSearch_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_GetResult_Event_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LawnmowerSearch_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__LawnmowerSearch_GetResult_Event__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_GetResult_Event__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult_Event>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_GetResult_Event)() {
  return get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult_Event>();
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
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_GetResult_type_support_ids_t;

static const _LawnmowerSearch_GetResult_type_support_ids_t _LawnmowerSearch_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_GetResult_type_support_symbol_names_t _LawnmowerSearch_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_GetResult)),
  }
};

typedef struct _LawnmowerSearch_GetResult_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_GetResult_type_support_data_t;

static _LawnmowerSearch_GetResult_type_support_data_t _LawnmowerSearch_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_GetResult_service_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LawnmowerSearch_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mission_interfaces::action::LawnmowerSearch_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mission_interfaces::action::LawnmowerSearch_GetResult>,
  &mission_interfaces__action__LawnmowerSearch_GetResult__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_GetResult__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mission_interfaces::action::LawnmowerSearch_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__functions.h"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

typedef struct _LawnmowerSearch_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LawnmowerSearch_FeedbackMessage_type_support_ids_t;

static const _LawnmowerSearch_FeedbackMessage_type_support_ids_t _LawnmowerSearch_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LawnmowerSearch_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LawnmowerSearch_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LawnmowerSearch_FeedbackMessage_type_support_symbol_names_t _LawnmowerSearch_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mission_interfaces, action, LawnmowerSearch_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, action, LawnmowerSearch_FeedbackMessage)),
  }
};

typedef struct _LawnmowerSearch_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _LawnmowerSearch_FeedbackMessage_type_support_data_t;

static _LawnmowerSearch_FeedbackMessage_type_support_data_t _LawnmowerSearch_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LawnmowerSearch_FeedbackMessage_message_typesupport_map = {
  2,
  "mission_interfaces",
  &_LawnmowerSearch_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_LawnmowerSearch_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_LawnmowerSearch_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LawnmowerSearch_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LawnmowerSearch_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mission_interfaces__action__LawnmowerSearch_FeedbackMessage__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch_FeedbackMessage__get_type_description,
  &mission_interfaces__action__LawnmowerSearch_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_FeedbackMessage>()
{
  return &::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch_FeedbackMessage)() {
  return get_message_type_support_handle<mission_interfaces::action::LawnmowerSearch_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "mission_interfaces/action/detail/lawnmower_search__struct.hpp"
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

static rosidl_action_type_support_t LawnmowerSearch_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &mission_interfaces__action__LawnmowerSearch__get_type_hash,
  &mission_interfaces__action__LawnmowerSearch__get_type_description,
  &mission_interfaces__action__LawnmowerSearch__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mission_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<mission_interfaces::action::LawnmowerSearch>()
{
  using ::mission_interfaces::action::rosidl_typesupport_cpp::LawnmowerSearch_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  LawnmowerSearch_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::mission_interfaces::action::LawnmowerSearch::Impl::SendGoalService>();
  LawnmowerSearch_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::mission_interfaces::action::LawnmowerSearch::Impl::GetResultService>();
  LawnmowerSearch_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::mission_interfaces::action::LawnmowerSearch::Impl::CancelGoalService>();
  LawnmowerSearch_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::mission_interfaces::action::LawnmowerSearch::Impl::FeedbackMessage>();
  LawnmowerSearch_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::mission_interfaces::action::LawnmowerSearch::Impl::GoalStatusMessage>();
  return &LawnmowerSearch_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, mission_interfaces, action, LawnmowerSearch)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<mission_interfaces::action::LawnmowerSearch>();
}

#ifdef __cplusplus
}
#endif
