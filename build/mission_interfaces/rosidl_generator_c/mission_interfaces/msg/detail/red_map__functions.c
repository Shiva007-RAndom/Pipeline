// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mission_interfaces:msg/RedMap.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/msg/detail/red_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mission_interfaces__msg__RedMap__init(mission_interfaces__msg__RedMap * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mission_interfaces__msg__RedMap__fini(msg);
    return false;
  }
  // origin_north
  // origin_east
  // axis_heading
  // cell
  // grid_x0
  // grid_y0
  // width
  // height
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    mission_interfaces__msg__RedMap__fini(msg);
    return false;
  }
  // version
  // margin
  return true;
}

void
mission_interfaces__msg__RedMap__fini(mission_interfaces__msg__RedMap * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // origin_north
  // origin_east
  // axis_heading
  // cell
  // grid_x0
  // grid_y0
  // width
  // height
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
  // version
  // margin
}

bool
mission_interfaces__msg__RedMap__are_equal(const mission_interfaces__msg__RedMap * lhs, const mission_interfaces__msg__RedMap * rhs)
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
  // origin_north
  if (lhs->origin_north != rhs->origin_north) {
    return false;
  }
  // origin_east
  if (lhs->origin_east != rhs->origin_east) {
    return false;
  }
  // axis_heading
  if (lhs->axis_heading != rhs->axis_heading) {
    return false;
  }
  // cell
  if (lhs->cell != rhs->cell) {
    return false;
  }
  // grid_x0
  if (lhs->grid_x0 != rhs->grid_x0) {
    return false;
  }
  // grid_y0
  if (lhs->grid_y0 != rhs->grid_y0) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // version
  if (lhs->version != rhs->version) {
    return false;
  }
  // margin
  if (lhs->margin != rhs->margin) {
    return false;
  }
  return true;
}

bool
mission_interfaces__msg__RedMap__copy(
  const mission_interfaces__msg__RedMap * input,
  mission_interfaces__msg__RedMap * output)
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
  // origin_north
  output->origin_north = input->origin_north;
  // origin_east
  output->origin_east = input->origin_east;
  // axis_heading
  output->axis_heading = input->axis_heading;
  // cell
  output->cell = input->cell;
  // grid_x0
  output->grid_x0 = input->grid_x0;
  // grid_y0
  output->grid_y0 = input->grid_y0;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // version
  output->version = input->version;
  // margin
  output->margin = input->margin;
  return true;
}

mission_interfaces__msg__RedMap *
mission_interfaces__msg__RedMap__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__RedMap * msg = (mission_interfaces__msg__RedMap *)allocator.allocate(sizeof(mission_interfaces__msg__RedMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__msg__RedMap));
  bool success = mission_interfaces__msg__RedMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__msg__RedMap__destroy(mission_interfaces__msg__RedMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__msg__RedMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__msg__RedMap__Sequence__init(mission_interfaces__msg__RedMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__RedMap * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__msg__RedMap)) {
      return false;
    }
    data = (mission_interfaces__msg__RedMap *)allocator.zero_allocate(size, sizeof(mission_interfaces__msg__RedMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__msg__RedMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__msg__RedMap__fini(&data[i - 1]);
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
mission_interfaces__msg__RedMap__Sequence__fini(mission_interfaces__msg__RedMap__Sequence * array)
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
      mission_interfaces__msg__RedMap__fini(&array->data[i]);
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

mission_interfaces__msg__RedMap__Sequence *
mission_interfaces__msg__RedMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__RedMap__Sequence * array = (mission_interfaces__msg__RedMap__Sequence *)allocator.allocate(sizeof(mission_interfaces__msg__RedMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__msg__RedMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__msg__RedMap__Sequence__destroy(mission_interfaces__msg__RedMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__msg__RedMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__msg__RedMap__Sequence__are_equal(const mission_interfaces__msg__RedMap__Sequence * lhs, const mission_interfaces__msg__RedMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__msg__RedMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__msg__RedMap__Sequence__copy(
  const mission_interfaces__msg__RedMap__Sequence * input,
  mission_interfaces__msg__RedMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__msg__RedMap)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__msg__RedMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__msg__RedMap * data =
      (mission_interfaces__msg__RedMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__msg__RedMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__msg__RedMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__msg__RedMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
