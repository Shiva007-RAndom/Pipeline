// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mission_interfaces:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mission_interfaces/msg/detail/motor_status__rosidl_typesupport_introspection_c.h"
#include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mission_interfaces/msg/detail/motor_status__functions.h"
#include "mission_interfaces/msg/detail/motor_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__msg__MotorStatus__init(message_memory);
}

void mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_fini_function(void * message_memory)
{
  mission_interfaces__msg__MotorStatus__fini(message_memory);
}

size_t mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__size_function__MotorStatus__servo_pwm(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__get_const_function__MotorStatus__servo_pwm(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__get_function__MotorStatus__servo_pwm(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__fetch_function__MotorStatus__servo_pwm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__get_const_function__MotorStatus__servo_pwm(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__assign_function__MotorStatus__servo_pwm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__get_function__MotorStatus__servo_pwm(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__MotorStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_pwm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__MotorStatus, servo_pwm),  // bytes offset in struct
    NULL,  // default value
    mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__size_function__MotorStatus__servo_pwm,  // size() function pointer
    mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__get_const_function__MotorStatus__servo_pwm,  // get_const(index) function pointer
    mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__get_function__MotorStatus__servo_pwm,  // get(index) function pointer
    mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__fetch_function__MotorStatus__servo_pwm,  // fetch(index, &value) function pointer
    mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__assign_function__MotorStatus__servo_pwm,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thrust",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__MotorStatus, thrust),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd_roll_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__MotorStatus, cmd_roll_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd_pitch_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__MotorStatus, cmd_pitch_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_members = {
  "mission_interfaces__msg",  // message namespace
  "MotorStatus",  // message name
  5,  // number of fields
  sizeof(mission_interfaces__msg__MotorStatus),
  false,  // has_any_key_member_
  mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_member_array,  // message members
  mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_type_support_handle = {
  0,
  &mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_members,
  get_message_typesupport_handle_function,
  &mission_interfaces__msg__MotorStatus__get_type_hash,
  &mission_interfaces__msg__MotorStatus__get_type_description,
  &mission_interfaces__msg__MotorStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, msg, MotorStatus)() {
  mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__msg__MotorStatus__rosidl_typesupport_introspection_c__MotorStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
