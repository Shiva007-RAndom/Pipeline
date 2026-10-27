// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mission_interfaces:msg/RedPatch.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/msg/detail/red_patch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `contour`
#include "geometry_msgs/msg/detail/point32__functions.h"

bool
mission_interfaces__msg__RedPatch__init(mission_interfaces__msg__RedPatch * msg)
{
  if (!msg) {
    return false;
  }
  // centroid_x
  // centroid_y
  // offset_x
  // offset_y
  // area_px
  // area_fraction
  // bbox_xywh
  // contour
  if (!geometry_msgs__msg__Point32__Sequence__init(&msg->contour, 0)) {
    mission_interfaces__msg__RedPatch__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__msg__RedPatch__fini(mission_interfaces__msg__RedPatch * msg)
{
  if (!msg) {
    return;
  }
  // centroid_x
  // centroid_y
  // offset_x
  // offset_y
  // area_px
  // area_fraction
  // bbox_xywh
  // contour
  geometry_msgs__msg__Point32__Sequence__fini(&msg->contour);
}

bool
mission_interfaces__msg__RedPatch__are_equal(const mission_interfaces__msg__RedPatch * lhs, const mission_interfaces__msg__RedPatch * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // centroid_x
  if (lhs->centroid_x != rhs->centroid_x) {
    return false;
  }
  // centroid_y
  if (lhs->centroid_y != rhs->centroid_y) {
    return false;
  }
  // offset_x
  if (lhs->offset_x != rhs->offset_x) {
    return false;
  }
  // offset_y
  if (lhs->offset_y != rhs->offset_y) {
    return false;
  }
  // area_px
  if (lhs->area_px != rhs->area_px) {
    return false;
  }
  // area_fraction
  if (lhs->area_fraction != rhs->area_fraction) {
    return false;
  }
  // bbox_xywh
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->bbox_xywh[i] != rhs->bbox_xywh[i]) {
      return false;
    }
  }
  // contour
  if (!geometry_msgs__msg__Point32__Sequence__are_equal(
      &(lhs->contour), &(rhs->contour)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__msg__RedPatch__copy(
  const mission_interfaces__msg__RedPatch * input,
  mission_interfaces__msg__RedPatch * output)
{
  if (!input || !output) {
    return false;
  }
  // centroid_x
  output->centroid_x = input->centroid_x;
  // centroid_y
  output->centroid_y = input->centroid_y;
  // offset_x
  output->offset_x = input->offset_x;
  // offset_y
  output->offset_y = input->offset_y;
  // area_px
  output->area_px = input->area_px;
  // area_fraction
  output->area_fraction = input->area_fraction;
  // bbox_xywh
  for (size_t i = 0; i < 4; ++i) {
    output->bbox_xywh[i] = input->bbox_xywh[i];
  }
  // contour
  if (!geometry_msgs__msg__Point32__Sequence__copy(
      &(input->contour), &(output->contour)))
  {
    return false;
  }
  return true;
}

mission_interfaces__msg__RedPatch *
mission_interfaces__msg__RedPatch__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__RedPatch * msg = (mission_interfaces__msg__RedPatch *)allocator.allocate(sizeof(mission_interfaces__msg__RedPatch), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__msg__RedPatch));
  bool success = mission_interfaces__msg__RedPatch__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__msg__RedPatch__destroy(mission_interfaces__msg__RedPatch * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__msg__RedPatch__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__msg__RedPatch__Sequence__init(mission_interfaces__msg__RedPatch__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__RedPatch * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__msg__RedPatch)) {
      return false;
    }
    data = (mission_interfaces__msg__RedPatch *)allocator.zero_allocate(size, sizeof(mission_interfaces__msg__RedPatch), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__msg__RedPatch__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__msg__RedPatch__fini(&data[i - 1]);
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
mission_interfaces__msg__RedPatch__Sequence__fini(mission_interfaces__msg__RedPatch__Sequence * array)
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
      mission_interfaces__msg__RedPatch__fini(&array->data[i]);
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

mission_interfaces__msg__RedPatch__Sequence *
mission_interfaces__msg__RedPatch__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__RedPatch__Sequence * array = (mission_interfaces__msg__RedPatch__Sequence *)allocator.allocate(sizeof(mission_interfaces__msg__RedPatch__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__msg__RedPatch__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__msg__RedPatch__Sequence__destroy(mission_interfaces__msg__RedPatch__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__msg__RedPatch__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__msg__RedPatch__Sequence__are_equal(const mission_interfaces__msg__RedPatch__Sequence * lhs, const mission_interfaces__msg__RedPatch__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__msg__RedPatch__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__msg__RedPatch__Sequence__copy(
  const mission_interfaces__msg__RedPatch__Sequence * input,
  mission_interfaces__msg__RedPatch__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__msg__RedPatch)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__msg__RedPatch);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__msg__RedPatch * data =
      (mission_interfaces__msg__RedPatch *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__msg__RedPatch__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__msg__RedPatch__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__msg__RedPatch__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
