// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mission_interfaces:msg/RedZoneResult.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/msg/detail/red_zone_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `patches`
#include "mission_interfaces/msg/detail/red_patch__functions.h"

bool
mission_interfaces__msg__RedZoneResult__init(mission_interfaces__msg__RedZoneResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mission_interfaces__msg__RedZoneResult__fini(msg);
    return false;
  }
  // image_width
  // image_height
  // detected
  // num_patches
  // total_area_fraction
  // patches
  if (!mission_interfaces__msg__RedPatch__Sequence__init(&msg->patches, 0)) {
    mission_interfaces__msg__RedZoneResult__fini(msg);
    return false;
  }
  // processing_time_ms
  return true;
}

void
mission_interfaces__msg__RedZoneResult__fini(mission_interfaces__msg__RedZoneResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // image_width
  // image_height
  // detected
  // num_patches
  // total_area_fraction
  // patches
  mission_interfaces__msg__RedPatch__Sequence__fini(&msg->patches);
  // processing_time_ms
}

bool
mission_interfaces__msg__RedZoneResult__are_equal(const mission_interfaces__msg__RedZoneResult * lhs, const mission_interfaces__msg__RedZoneResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // image_width
  if (lhs->image_width != rhs->image_width) {
    return false;
  }
  // image_height
  if (lhs->image_height != rhs->image_height) {
    return false;
  }
  // detected
  if (lhs->detected != rhs->detected) {
    return false;
  }
  // num_patches
  if (lhs->num_patches != rhs->num_patches) {
    return false;
  }
  // total_area_fraction
  if (lhs->total_area_fraction != rhs->total_area_fraction) {
    return false;
  }
  // patches
  if (!mission_interfaces__msg__RedPatch__Sequence__are_equal(
      &(lhs->patches), &(rhs->patches)))
  {
    return false;
  }
  // processing_time_ms
  if (lhs->processing_time_ms != rhs->processing_time_ms) {
    return false;
  }
  return true;
}

bool
mission_interfaces__msg__RedZoneResult__copy(
  const mission_interfaces__msg__RedZoneResult * input,
  mission_interfaces__msg__RedZoneResult * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // image_width
  output->image_width = input->image_width;
  // image_height
  output->image_height = input->image_height;
  // detected
  output->detected = input->detected;
  // num_patches
  output->num_patches = input->num_patches;
  // total_area_fraction
  output->total_area_fraction = input->total_area_fraction;
  // patches
  if (!mission_interfaces__msg__RedPatch__Sequence__copy(
      &(input->patches), &(output->patches)))
  {
    return false;
  }
  // processing_time_ms
  output->processing_time_ms = input->processing_time_ms;
  return true;
}

mission_interfaces__msg__RedZoneResult *
mission_interfaces__msg__RedZoneResult__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__RedZoneResult * msg = (mission_interfaces__msg__RedZoneResult *)allocator.allocate(sizeof(mission_interfaces__msg__RedZoneResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__msg__RedZoneResult));
  bool success = mission_interfaces__msg__RedZoneResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__msg__RedZoneResult__destroy(mission_interfaces__msg__RedZoneResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__msg__RedZoneResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__msg__RedZoneResult__Sequence__init(mission_interfaces__msg__RedZoneResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__RedZoneResult * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__msg__RedZoneResult)) {
      return false;
    }
    data = (mission_interfaces__msg__RedZoneResult *)allocator.zero_allocate(size, sizeof(mission_interfaces__msg__RedZoneResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__msg__RedZoneResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__msg__RedZoneResult__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mission_interfaces__msg__RedZoneResult__Sequence__fini(mission_interfaces__msg__RedZoneResult__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mission_interfaces__msg__RedZoneResult__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mission_interfaces__msg__RedZoneResult__Sequence *
mission_interfaces__msg__RedZoneResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__RedZoneResult__Sequence * array = (mission_interfaces__msg__RedZoneResult__Sequence *)allocator.allocate(sizeof(mission_interfaces__msg__RedZoneResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__msg__RedZoneResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__msg__RedZoneResult__Sequence__destroy(mission_interfaces__msg__RedZoneResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__msg__RedZoneResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__msg__RedZoneResult__Sequence__are_equal(const mission_interfaces__msg__RedZoneResult__Sequence * lhs, const mission_interfaces__msg__RedZoneResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__msg__RedZoneResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__msg__RedZoneResult__Sequence__copy(
  const mission_interfaces__msg__RedZoneResult__Sequence * input,
  mission_interfaces__msg__RedZoneResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__msg__RedZoneResult)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__msg__RedZoneResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__msg__RedZoneResult * data =
      (mission_interfaces__msg__RedZoneResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__msg__RedZoneResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__msg__RedZoneResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__msg__RedZoneResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
