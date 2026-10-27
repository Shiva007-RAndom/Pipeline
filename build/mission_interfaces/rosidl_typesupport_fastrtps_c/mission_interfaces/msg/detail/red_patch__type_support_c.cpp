// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mission_interfaces:msg/RedPatch.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/msg/detail/red_patch__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mission_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mission_interfaces/msg/detail/red_patch__struct.h"
#include "mission_interfaces/msg/detail/red_patch__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point32__functions.h"  // contour

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
bool cdr_serialize_geometry_msgs__msg__Point32(
  const geometry_msgs__msg__Point32 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
bool cdr_deserialize_geometry_msgs__msg__Point32(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point32 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
size_t get_serialized_size_geometry_msgs__msg__Point32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
size_t max_serialized_size_geometry_msgs__msg__Point32(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Point32(
  const geometry_msgs__msg__Point32 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Point32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Point32(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point32)();


using _RedPatch__ros_msg_type = mission_interfaces__msg__RedPatch;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
bool cdr_serialize_mission_interfaces__msg__RedPatch(
  const mission_interfaces__msg__RedPatch * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: centroid_x
  {
    cdr << ros_message->centroid_x;
  }

  // Field name: centroid_y
  {
    cdr << ros_message->centroid_y;
  }

  // Field name: offset_x
  {
    cdr << ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr << ros_message->offset_y;
  }

  // Field name: area_px
  {
    cdr << ros_message->area_px;
  }

  // Field name: area_fraction
  {
    cdr << ros_message->area_fraction;
  }

  // Field name: bbox_xywh
  {
    size_t size = 4;
    auto array_ptr = ros_message->bbox_xywh;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: contour
  {
    size_t size = ros_message->contour.size;
    auto array_ptr = ros_message->contour.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Point32(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
bool cdr_deserialize_mission_interfaces__msg__RedPatch(
  eprosima::fastcdr::Cdr & cdr,
  mission_interfaces__msg__RedPatch * ros_message)
{
  // Field name: centroid_x
  {
    cdr >> ros_message->centroid_x;
  }

  // Field name: centroid_y
  {
    cdr >> ros_message->centroid_y;
  }

  // Field name: offset_x
  {
    cdr >> ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr >> ros_message->offset_y;
  }

  // Field name: area_px
  {
    cdr >> ros_message->area_px;
  }

  // Field name: area_fraction
  {
    cdr >> ros_message->area_fraction;
  }

  // Field name: bbox_xywh
  {
    size_t size = 4;
    auto array_ptr = ros_message->bbox_xywh;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: contour
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->contour.data) {
      geometry_msgs__msg__Point32__Sequence__fini(&ros_message->contour);
    }
    if (!geometry_msgs__msg__Point32__Sequence__init(&ros_message->contour, size)) {
      fprintf(stderr, "failed to create array for field 'contour'");
      return false;
    }
    auto array_ptr = ros_message->contour.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Point32(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t get_serialized_size_mission_interfaces__msg__RedPatch(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RedPatch__ros_msg_type * ros_message = static_cast<const _RedPatch__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: centroid_x
  {
    size_t item_size = sizeof(ros_message->centroid_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: centroid_y
  {
    size_t item_size = sizeof(ros_message->centroid_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: offset_x
  {
    size_t item_size = sizeof(ros_message->offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: offset_y
  {
    size_t item_size = sizeof(ros_message->offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: area_px
  {
    size_t item_size = sizeof(ros_message->area_px);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: area_fraction
  {
    size_t item_size = sizeof(ros_message->area_fraction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bbox_xywh
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->bbox_xywh;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contour
  {
    size_t array_size = ros_message->contour.size;
    auto array_ptr = ros_message->contour.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Point32(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t max_serialized_size_mission_interfaces__msg__RedPatch(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: centroid_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: centroid_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: offset_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: offset_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: area_px
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: area_fraction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bbox_xywh
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: contour
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mission_interfaces__msg__RedPatch;
    is_plain =
      (
      offsetof(DataType, contour) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
bool cdr_serialize_key_mission_interfaces__msg__RedPatch(
  const mission_interfaces__msg__RedPatch * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: centroid_x
  {
    cdr << ros_message->centroid_x;
  }

  // Field name: centroid_y
  {
    cdr << ros_message->centroid_y;
  }

  // Field name: offset_x
  {
    cdr << ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr << ros_message->offset_y;
  }

  // Field name: area_px
  {
    cdr << ros_message->area_px;
  }

  // Field name: area_fraction
  {
    cdr << ros_message->area_fraction;
  }

  // Field name: bbox_xywh
  {
    size_t size = 4;
    auto array_ptr = ros_message->bbox_xywh;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: contour
  {
    size_t size = ros_message->contour.size;
    auto array_ptr = ros_message->contour.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Point32(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t get_serialized_size_key_mission_interfaces__msg__RedPatch(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RedPatch__ros_msg_type * ros_message = static_cast<const _RedPatch__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: centroid_x
  {
    size_t item_size = sizeof(ros_message->centroid_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: centroid_y
  {
    size_t item_size = sizeof(ros_message->centroid_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: offset_x
  {
    size_t item_size = sizeof(ros_message->offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: offset_y
  {
    size_t item_size = sizeof(ros_message->offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: area_px
  {
    size_t item_size = sizeof(ros_message->area_px);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: area_fraction
  {
    size_t item_size = sizeof(ros_message->area_fraction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: bbox_xywh
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->bbox_xywh;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contour
  {
    size_t array_size = ros_message->contour.size;
    auto array_ptr = ros_message->contour.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Point32(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t max_serialized_size_key_mission_interfaces__msg__RedPatch(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: centroid_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: centroid_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: offset_x
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: offset_y
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: area_px
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: area_fraction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: bbox_xywh
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: contour
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mission_interfaces__msg__RedPatch;
    is_plain =
      (
      offsetof(DataType, contour) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RedPatch__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mission_interfaces__msg__RedPatch * ros_message = static_cast<const mission_interfaces__msg__RedPatch *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mission_interfaces__msg__RedPatch(ros_message, cdr);
}

static bool _RedPatch__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mission_interfaces__msg__RedPatch * ros_message = static_cast<mission_interfaces__msg__RedPatch *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mission_interfaces__msg__RedPatch(cdr, ros_message);
}

static uint32_t _RedPatch__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mission_interfaces__msg__RedPatch(
      untyped_ros_message, 0));
}

static size_t _RedPatch__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mission_interfaces__msg__RedPatch(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RedPatch = {
  "mission_interfaces::msg",
  "RedPatch",
  _RedPatch__cdr_serialize,
  _RedPatch__cdr_deserialize,
  _RedPatch__get_serialized_size,
  _RedPatch__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RedPatch__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RedPatch,
  get_message_typesupport_handle_function,
  &mission_interfaces__msg__RedPatch__get_type_hash,
  &mission_interfaces__msg__RedPatch__get_type_description,
  &mission_interfaces__msg__RedPatch__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, msg, RedPatch)() {
  return &_RedPatch__type_support;
}

#if defined(__cplusplus)
}
#endif
