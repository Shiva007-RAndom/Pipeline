// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mission_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mission_interfaces/msg/detail/motor_status__functions.h"
#include "mission_interfaces/msg/detail/motor_status__struct.hpp"
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

void MotorStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mission_interfaces::msg::MotorStatus(_init);
}

void MotorStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mission_interfaces::msg::MotorStatus *>(message_memory);
  typed_message->~MotorStatus();
}

size_t size_function__MotorStatus__servo_pwm(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MotorStatus__servo_pwm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStatus__servo_pwm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorStatus__servo_pwm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__MotorStatus__servo_pwm(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__MotorStatus__servo_pwm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__MotorStatus__servo_pwm(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorStatus_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::MotorStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "servo_pwm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::MotorStatus, servo_pwm),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStatus__servo_pwm,  // size() function pointer
    get_const_function__MotorStatus__servo_pwm,  // get_const(index) function pointer
    get_function__MotorStatus__servo_pwm,  // get(index) function pointer
    fetch_function__MotorStatus__servo_pwm,  // fetch(index, &value) function pointer
    assign_function__MotorStatus__servo_pwm,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "thrust",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::MotorStatus, thrust),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cmd_roll_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::MotorStatus, cmd_roll_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cmd_pitch_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces::msg::MotorStatus, cmd_pitch_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorStatus_message_members = {
  "mission_interfaces::msg",  // message namespace
  "MotorStatus",  // message name
  5,  // number of fields
  sizeof(mission_interfaces::msg::MotorStatus),
  false,  // has_any_key_member_
  MotorStatus_message_member_array,  // message members
  MotorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorStatus_message_members,
  get_message_typesupport_handle_function,
  &mission_interfaces__msg__MotorStatus__get_type_hash,
  &mission_interfaces__msg__MotorStatus__get_type_description,
  &mission_interfaces__msg__MotorStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mission_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mission_interfaces::msg::MotorStatus>()
{
  return &::mission_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mission_interfaces, msg, MotorStatus)() {
  return &::mission_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
