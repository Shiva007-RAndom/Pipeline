// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mission_interfaces:msg/RedPatch.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mission_interfaces/msg/detail/red_patch__rosidl_typesupport_introspection_c.h"
#include "mission_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mission_interfaces/msg/detail/red_patch__functions.h"
#include "mission_interfaces/msg/detail/red_patch__struct.h"


// Include directives for member types
// Member `contour`
#include "geometry_msgs/msg/point32.h"
// Member `contour`
#include "geometry_msgs/msg/detail/point32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mission_interfaces__msg__RedPatch__init(message_memory);
}

void mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_fini_function(void * message_memory)
{
  mission_interfaces__msg__RedPatch__fini(message_memory);
}

size_t mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__size_function__RedPatch__bbox_xywh(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_const_function__RedPatch__bbox_xywh(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_function__RedPatch__bbox_xywh(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__fetch_function__RedPatch__bbox_xywh(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_const_function__RedPatch__bbox_xywh(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__assign_function__RedPatch__bbox_xywh(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_function__RedPatch__bbox_xywh(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

size_t mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__size_function__RedPatch__contour(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return member->size;
}

const void * mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_const_function__RedPatch__contour(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_function__RedPatch__contour(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__fetch_function__RedPatch__contour(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point32 * item =
    ((const geometry_msgs__msg__Point32 *)
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_const_function__RedPatch__contour(untyped_member, index));
  geometry_msgs__msg__Point32 * value =
    (geometry_msgs__msg__Point32 *)(untyped_value);
  *value = *item;
}

void mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__assign_function__RedPatch__contour(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point32 * item =
    ((geometry_msgs__msg__Point32 *)
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_function__RedPatch__contour(untyped_member, index));
  const geometry_msgs__msg__Point32 * value =
    (const geometry_msgs__msg__Point32 *)(untyped_value);
  *item = *value;
}

bool mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__resize_function__RedPatch__contour(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  geometry_msgs__msg__Point32__Sequence__fini(member);
  return geometry_msgs__msg__Point32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_message_member_array[8] = {
  {
    "centroid_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedPatch, centroid_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "centroid_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedPatch, centroid_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedPatch, offset_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedPatch, offset_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_px",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedPatch, area_px),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_fraction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedPatch, area_fraction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox_xywh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedPatch, bbox_xywh),  // bytes offset in struct
    NULL,  // default value
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__size_function__RedPatch__bbox_xywh,  // size() function pointer
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_const_function__RedPatch__bbox_xywh,  // get_const(index) function pointer
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_function__RedPatch__bbox_xywh,  // get(index) function pointer
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__fetch_function__RedPatch__bbox_xywh,  // fetch(index, &value) function pointer
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__assign_function__RedPatch__bbox_xywh,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mission_interfaces__msg__RedPatch, contour),  // bytes offset in struct
    NULL,  // default value
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__size_function__RedPatch__contour,  // size() function pointer
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_const_function__RedPatch__contour,  // get_const(index) function pointer
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__get_function__RedPatch__contour,  // get(index) function pointer
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__fetch_function__RedPatch__contour,  // fetch(index, &value) function pointer
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__assign_function__RedPatch__contour,  // assign(index, value) function pointer
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__resize_function__RedPatch__contour  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_message_members = {
  "mission_interfaces__msg",  // message namespace
  "RedPatch",  // message name
  8,  // number of fields
  sizeof(mission_interfaces__msg__RedPatch),
  false,  // has_any_key_member_
  mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_message_member_array,  // message members
  mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_init_function,  // function to initialize message memory (memory has to be allocated)
  mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_message_type_support_handle = {
  0,
  &mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_message_members,
  get_message_typesupport_handle_function,
  &mission_interfaces__msg__RedPatch__get_type_hash,
  &mission_interfaces__msg__RedPatch__get_type_description,
  &mission_interfaces__msg__RedPatch__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mission_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mission_interfaces, msg, RedPatch)() {
  mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_message_type_support_handle.typesupport_identifier) {
    mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mission_interfaces__msg__RedPatch__rosidl_typesupport_introspection_c__RedPatch_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
