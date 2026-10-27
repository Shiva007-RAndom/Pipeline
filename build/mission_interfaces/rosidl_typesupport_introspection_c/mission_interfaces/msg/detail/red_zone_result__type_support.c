// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mission_interfaces:msg/RedZoneResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mission_interfaces/msg/detail/red_zone_result__rosidl_typesupport_introspection_c.h"
#include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mission_interfaces/msg/detail/red_zone_result__functions.h"
#include "mission_interfaces/msg/detail/red_zone_result__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `patches`
#include "mission_interfaces/msg/red_patch.h"
// Member `patches`
#include "mission_interfaces/msg/detail/red_patch__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__msg__RedZoneResult__init(message_memory);
}

void mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_fini_function(void * message_memory)
{
  mission_interfaces__msg__RedZoneResult__fini(message_memory);
}

size_t mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__size_function__RedZoneResult__patches(
  const void * untyped_member)
{
  const mission_interfaces__msg__RedPatch__Sequence * member =
    (const mission_interfaces__msg__RedPatch__Sequence *)(untyped_member);
  return member->size;
}

const void * mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__get_const_function__RedZoneResult__patches(
  const void * untyped_member, size_t index)
{
  const mission_interfaces__msg__RedPatch__Sequence * member =
    (const mission_interfaces__msg__RedPatch__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__get_function__RedZoneResult__patches(
  void * untyped_member, size_t index)
{
  mission_interfaces__msg__RedPatch__Sequence * member =
    (mission_interfaces__msg__RedPatch__Sequence *)(untyped_member);
  return &member->data[index];
}

void mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__fetch_function__RedZoneResult__patches(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mission_interfaces__msg__RedPatch * item =
    ((const mission_interfaces__msg__RedPatch *)
    mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__get_const_function__RedZoneResult__patches(untyped_member, index));
  mission_interfaces__msg__RedPatch * value =
    (mission_interfaces__msg__RedPatch *)(untyped_value);
  *value = *item;
}

void mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__assign_function__RedZoneResult__patches(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mission_interfaces__msg__RedPatch * item =
    ((mission_interfaces__msg__RedPatch *)
    mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__get_function__RedZoneResult__patches(untyped_member, index));
  const mission_interfaces__msg__RedPatch * value =
    (const mission_interfaces__msg__RedPatch *)(untyped_value);
  *item = *value;
}

bool mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__resize_function__RedZoneResult__patches(
  void * untyped_member, size_t size)
{
  mission_interfaces__msg__RedPatch__Sequence * member =
    (mission_interfaces__msg__RedPatch__Sequence *)(untyped_member);
  mission_interfaces__msg__RedPatch__Sequence__fini(member);
  return mission_interfaces__msg__RedPatch__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedZoneResult, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedZoneResult, image_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedZoneResult, image_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedZoneResult, detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_patches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedZoneResult, num_patches),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_area_fraction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedZoneResult, total_area_fraction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "patches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedZoneResult, patches),  // bytes offset in struct
    NULL,  // default value
    mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__size_function__RedZoneResult__patches,  // size() function pointer
    mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__get_const_function__RedZoneResult__patches,  // get_const(index) function pointer
    mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__get_function__RedZoneResult__patches,  // get(index) function pointer
    mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__fetch_function__RedZoneResult__patches,  // fetch(index, &value) function pointer
    mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__assign_function__RedZoneResult__patches,  // assign(index, value) function pointer
    mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__resize_function__RedZoneResult__patches  // resize(index) function pointer
  },
  {
    "processing_time_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedZoneResult, processing_time_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_message_members = {
  "mission_interfaces__msg",  // message namespace
  "RedZoneResult",  // message name
  8,  // number of fields
  sizeof(mission_interfaces__msg__RedZoneResult),
  false,  // has_any_key_member_
  mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_message_member_array,  // message members
  mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_message_type_support_handle = {
  0,
  &mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_message_members,
  get_message_typesupport_handle_function,
  &mission_interfaces__msg__RedZoneResult__get_type_hash,
  &mission_interfaces__msg__RedZoneResult__get_type_description,
  &mission_interfaces__msg__RedZoneResult__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, msg, RedZoneResult)() {
  mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, msg, RedPatch)();
  if (!mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__msg__RedZoneResult__rosidl_typesupport_introspection_c__RedZoneResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
