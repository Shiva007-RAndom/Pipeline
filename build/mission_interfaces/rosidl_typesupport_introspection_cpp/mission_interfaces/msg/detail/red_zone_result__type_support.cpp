// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mission_interfaces:msg/RedZoneResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mission_interfaces/msg/detail/red_zone_result__functions.h"
#include "mission_interfaces/msg/detail/red_zone_result__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mission_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RedZoneResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mission_interfaces::msg::RedZoneResult(_init);
}

void RedZoneResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mission_interfaces::msg::RedZoneResult *>(message_memory);
  typed_message->~RedZoneResult();
}

size_t size_function__RedZoneResult__patches(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mission_interfaces::msg::RedPatch> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RedZoneResult__patches(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mission_interfaces::msg::RedPatch> *>(untyped_member);
  return &member[index];
}

void * get_function__RedZoneResult__patches(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mission_interfaces::msg::RedPatch> *>(untyped_member);
  return &member[index];
}

void fetch_function__RedZoneResult__patches(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mission_interfaces::msg::RedPatch *>(
    get_const_function__RedZoneResult__patches(untyped_member, index));
  auto & value = *reinterpret_cast<mission_interfaces::msg::RedPatch *>(untyped_value);
  value = item;
}

void assign_function__RedZoneResult__patches(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mission_interfaces::msg::RedPatch *>(
    get_function__RedZoneResult__patches(untyped_member, index));
  const auto & value = *reinterpret_cast<const mission_interfaces::msg::RedPatch *>(untyped_value);
  item = value;
}

void resize_function__RedZoneResult__patches(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mission_interfaces::msg::RedPatch> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RedZoneResult_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::RedZoneResult, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::RedZoneResult, image_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image_height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::RedZoneResult, image_height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::RedZoneResult, detected),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_patches",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::RedZoneResult, num_patches),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_area_fraction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::RedZoneResult, total_area_fraction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "patches",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mission_interfaces::msg::RedPatch>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::RedZoneResult, patches),  // bytes offset in struct
    nullptr,  // default value
    size_function__RedZoneResult__patches,  // size() function pointer
    get_const_function__RedZoneResult__patches,  // get_const(index) function pointer
    get_function__RedZoneResult__patches,  // get(index) function pointer
    fetch_function__RedZoneResult__patches,  // fetch(index, &value) function pointer
    assign_function__RedZoneResult__patches,  // assign(index, value) function pointer
    resize_function__RedZoneResult__patches  // resize(index) function pointer
  },
  {
    "processing_time_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::RedZoneResult, processing_time_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RedZoneResult_message_members = {
  "mission_interfaces::msg",  // message namespace
  "RedZoneResult",  // message name
  8,  // number of fields
  sizeof(mission_interfaces::msg::RedZoneResult),
  false,  // has_any_key_member_
  RedZoneResult_message_member_array,  // message members
  RedZoneResult_init_function,  // function to initialize message memory (memory has to be allocated)
  RedZoneResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RedZoneResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RedZoneResult_message_members,
  get_message_typesupport_handle_function,
  &mission_interfaces__msg__RedZoneResult__get_type_hash,
  &mission_interfaces__msg__RedZoneResult__get_type_description,
  &mission_interfaces__msg__RedZoneResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mission_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::msg::RedZoneResult>()
{
  return &::mission_interfaces::msg::rosidl_typesupport_introspection_cpp::RedZoneResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, msg, RedZoneResult)() {
  return &::mission_interfaces::msg::rosidl_typesupport_introspection_cpp::RedZoneResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
