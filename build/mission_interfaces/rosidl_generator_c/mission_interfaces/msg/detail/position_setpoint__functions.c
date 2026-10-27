// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mission_interfaces:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/msg/detail/position_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mission_interfaces__msg__PositionSetpoint__init(mission_interfaces__msg__PositionSetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mission_interfaces__msg__PositionSetpoint__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // yaw
  return true;
}

void
mission_interfaces__msg__PositionSetpoint__fini(mission_interfaces__msg__PositionSetpoint * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x
  // y
  // z
  // yaw
}

bool
mission_interfaces__msg__PositionSetpoint__are_equal(const mission_interfaces__msg__PositionSetpoint * lhs, const mission_interfaces__msg__PositionSetpoint * rhs)
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
mission_interfaces__msg__PositionSetpoint__copy(
  const mission_interfaces__msg__PositionSetpoint * input,
  mission_interfaces__msg__PositionSetpoint * output)
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
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // yaw
  output->yaw = input->yaw;
  return true;
}

mission_interfaces__msg__PositionSetpoint *
mission_interfaces__msg__PositionSetpoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__PositionSetpoint * msg = (mission_interfaces__msg__PositionSetpoint *)allocator.allocate(sizeof(mission_interfaces__msg__PositionSetpoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__msg__PositionSetpoint));
  bool success = mission_interfaces__msg__PositionSetpoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__msg__PositionSetpoint__destroy(mission_interfaces__msg__PositionSetpoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__msg__PositionSetpoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__msg__PositionSetpoint__Sequence__init(mission_interfaces__msg__PositionSetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__PositionSetpoint * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__msg__PositionSetpoint)) {
      return false;
    }
    data = (mission_interfaces__msg__PositionSetpoint *)allocator.zero_allocate(size, sizeof(mission_interfaces__msg__PositionSetpoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__msg__PositionSetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__msg__PositionSetpoint__fini(&data[i - 1]);
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
mission_interfaces__msg__PositionSetpoint__Sequence__fini(mission_interfaces__msg__PositionSetpoint__Sequence * array)
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
      mission_interfaces__msg__PositionSetpoint__fini(&array->data[i]);
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

mission_interfaces__msg__PositionSetpoint__Sequence *
mission_interfaces__msg__PositionSetpoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__PositionSetpoint__Sequence * array = (mission_interfaces__msg__PositionSetpoint__Sequence *)allocator.allocate(sizeof(mission_interfaces__msg__PositionSetpoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__msg__PositionSetpoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__msg__PositionSetpoint__Sequence__destroy(mission_interfaces__msg__PositionSetpoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__msg__PositionSetpoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__msg__PositionSetpoint__Sequence__are_equal(const mission_interfaces__msg__PositionSetpoint__Sequence * lhs, const mission_interfaces__msg__PositionSetpoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__msg__PositionSetpoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__msg__PositionSetpoint__Sequence__copy(
  const mission_interfaces__msg__PositionSetpoint__Sequence * input,
  mission_interfaces__msg__PositionSetpoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__msg__PositionSetpoint)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__msg__PositionSetpoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__msg__PositionSetpoint * data =
      (mission_interfaces__msg__PositionSetpoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__msg__PositionSetpoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__msg__PositionSetpoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__msg__PositionSetpoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
