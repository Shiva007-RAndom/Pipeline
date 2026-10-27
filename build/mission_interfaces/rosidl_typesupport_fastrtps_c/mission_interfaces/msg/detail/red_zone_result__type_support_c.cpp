// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mission_interfaces:msg/RedZoneResult.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/msg/detail/red_zone_result__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mission_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mission_interfaces/msg/detail/red_zone_result__struct.h"
#include "mission_interfaces/msg/detail/red_zone_result__functions.h"
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

#include "mission_interfaces/msg/detail/red_patch__functions.h"  // patches
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_mission_interfaces__msg__RedPatch(
  const mission_interfaces__msg__RedPatch * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_mission_interfaces__msg__RedPatch(
  eprosima::fastcdr::Cdr & cdr,
  mission_interfaces__msg__RedPatch * ros_message);

size_t get_serialized_size_mission_interfaces__msg__RedPatch(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mission_interfaces__msg__RedPatch(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_mission_interfaces__msg__RedPatch(
  const mission_interfaces__msg__RedPatch * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_mission_interfaces__msg__RedPatch(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_mission_interfaces__msg__RedPatch(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, msg, RedPatch)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mission_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _RedZoneResult__ros_msg_type = mission_interfaces__msg__RedZoneResult;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
bool cdr_serialize_mission_interfaces__msg__RedZoneResult(
  const mission_interfaces__msg__RedZoneResult * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: image_width
  {
    cdr << ros_message->image_width;
  }

  // Field name: image_height
  {
    cdr << ros_message->image_height;
  }

  // Field name: detected
  {
    cdr << (ros_message->detected ? true : false);
  }

  // Field name: num_patches
  {
    cdr << ros_message->num_patches;
  }

  // Field name: total_area_fraction
  {
    cdr << ros_message->total_area_fraction;
  }

  // Field name: patches
  {
    size_t size = ros_message->patches.size;
    auto array_ptr = ros_message->patches.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_mission_interfaces__msg__RedPatch(
        &array_ptr[i], cdr);
    }
  }

  // Field name: processing_time_ms
  {
    cdr << ros_message->processing_time_ms;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
bool cdr_deserialize_mission_interfaces__msg__RedZoneResult(
  eprosima::fastcdr::Cdr & cdr,
  mission_interfaces__msg__RedZoneResult * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: image_width
  {
    cdr >> ros_message->image_width;
  }

  // Field name: image_height
  {
    cdr >> ros_message->image_height;
  }

  // Field name: detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->detected = tmp ? true : false;
  }

  // Field name: num_patches
  {
    cdr >> ros_message->num_patches;
  }

  // Field name: total_area_fraction
  {
    cdr >> ros_message->total_area_fraction;
  }

  // Field name: patches
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

    if (ros_message->patches.data) {
      mission_interfaces__msg__RedPatch__Sequence__fini(&ros_message->patches);
    }
    if (!mission_interfaces__msg__RedPatch__Sequence__init(&ros_message->patches, size)) {
      fprintf(stderr, "failed to create array for field 'patches'");
      return false;
    }
    auto array_ptr = ros_message->patches.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_mission_interfaces__msg__RedPatch(cdr, &array_ptr[i]);
    }
  }

  // Field name: processing_time_ms
  {
    cdr >> ros_message->processing_time_ms;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t get_serialized_size_mission_interfaces__msg__RedZoneResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RedZoneResult__ros_msg_type * ros_message = static_cast<const _RedZoneResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: image_width
  {
    size_t item_size = sizeof(ros_message->image_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: image_height
  {
    size_t item_size = sizeof(ros_message->image_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: detected
  {
    size_t item_size = sizeof(ros_message->detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_patches
  {
    size_t item_size = sizeof(ros_message->num_patches);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_area_fraction
  {
    size_t item_size = sizeof(ros_message->total_area_fraction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: patches
  {
    size_t array_size = ros_message->patches.size;
    auto array_ptr = ros_message->patches.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mission_interfaces__msg__RedPatch(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: processing_time_ms
  {
    size_t item_size = sizeof(ros_message->processing_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t max_serialized_size_mission_interfaces__msg__RedZoneResult(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: image_width
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: image_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: detected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_patches
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: total_area_fraction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: patches
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
        max_serialized_size_mission_interfaces__msg__RedPatch(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: processing_time_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mission_interfaces__msg__RedZoneResult;
    is_plain =
      (
      offsetof(DataType, processing_time_ms) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
bool cdr_serialize_key_mission_interfaces__msg__RedZoneResult(
  const mission_interfaces__msg__RedZoneResult * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: image_width
  {
    cdr << ros_message->image_width;
  }

  // Field name: image_height
  {
    cdr << ros_message->image_height;
  }

  // Field name: detected
  {
    cdr << (ros_message->detected ? true : false);
  }

  // Field name: num_patches
  {
    cdr << ros_message->num_patches;
  }

  // Field name: total_area_fraction
  {
    cdr << ros_message->total_area_fraction;
  }

  // Field name: patches
  {
    size_t size = ros_message->patches.size;
    auto array_ptr = ros_message->patches.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_mission_interfaces__msg__RedPatch(
        &array_ptr[i], cdr);
    }
  }

  // Field name: processing_time_ms
  {
    cdr << ros_message->processing_time_ms;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t get_serialized_size_key_mission_interfaces__msg__RedZoneResult(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RedZoneResult__ros_msg_type * ros_message = static_cast<const _RedZoneResult__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: image_width
  {
    size_t item_size = sizeof(ros_message->image_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: image_height
  {
    size_t item_size = sizeof(ros_message->image_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: detected
  {
    size_t item_size = sizeof(ros_message->detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: num_patches
  {
    size_t item_size = sizeof(ros_message->num_patches);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_area_fraction
  {
    size_t item_size = sizeof(ros_message->total_area_fraction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: patches
  {
    size_t array_size = ros_message->patches.size;
    auto array_ptr = ros_message->patches.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_mission_interfaces__msg__RedPatch(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: processing_time_ms
  {
    size_t item_size = sizeof(ros_message->processing_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mission_interfaces
size_t max_serialized_size_key_mission_interfaces__msg__RedZoneResult(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: image_width
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: image_height
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: detected
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: num_patches
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: total_area_fraction
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: patches
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
        max_serialized_size_key_mission_interfaces__msg__RedPatch(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: processing_time_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mission_interfaces__msg__RedZoneResult;
    is_plain =
      (
      offsetof(DataType, processing_time_ms) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RedZoneResult__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const mission_interfaces__msg__RedZoneResult * ros_message = static_cast<const mission_interfaces__msg__RedZoneResult *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_mission_interfaces__msg__RedZoneResult(ros_message, cdr);
}

static bool _RedZoneResult__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  mission_interfaces__msg__RedZoneResult * ros_message = static_cast<mission_interfaces__msg__RedZoneResult *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_mission_interfaces__msg__RedZoneResult(cdr, ros_message);
}

static uint32_t _RedZoneResult__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mission_interfaces__msg__RedZoneResult(
      untyped_ros_message, 0));
}

static size_t _RedZoneResult__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mission_interfaces__msg__RedZoneResult(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RedZoneResult = {
  "mission_interfaces::msg",
  "RedZoneResult",
  _RedZoneResult__cdr_serialize,
  _RedZoneResult__cdr_deserialize,
  _RedZoneResult__get_serialized_size,
  _RedZoneResult__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RedZoneResult__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RedZoneResult,
  get_message_typesupport_handle_function,
  &mission_interfaces__msg__RedZoneResult__get_type_hash,
  &mission_interfaces__msg__RedZoneResult__get_type_description,
  &mission_interfaces__msg__RedZoneResult__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mission_interfaces, msg, RedZoneResult)() {
  return &_RedZoneResult__type_support;
}

#if defined(__cplusplus)
}
#endif
