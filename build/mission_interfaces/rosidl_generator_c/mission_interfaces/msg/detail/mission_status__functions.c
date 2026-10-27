// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mission_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/msg/detail/mission_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `stage`
// Member `state_text`
#include "rosidl_runtime_c/string_functions.h"

bool
mission_interfaces__msg__MissionStatus__init(mission_interfaces__msg__MissionStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mission_interfaces__msg__MissionStatus__fini(msg);
    return false;
  }
  // stage
  if (!rosidl_runtime_c__String__init(&msg->stage)) {
    mission_interfaces__msg__MissionStatus__fini(msg);
    return false;
  }
  // state_text
  if (!rosidl_runtime_c__String__init(&msg->state_text)) {
    mission_interfaces__msg__MissionStatus__fini(msg);
    return false;
  }
  // countdown
  // reference_ready
  return true;
}

void
mission_interfaces__msg__MissionStatus__fini(mission_interfaces__msg__MissionStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // stage
  rosidl_runtime_c__String__fini(&msg->stage);
  // state_text
  rosidl_runtime_c__String__fini(&msg->state_text);
  // countdown
  // reference_ready
}

bool
mission_interfaces__msg__MissionStatus__are_equal(const mission_interfaces__msg__MissionStatus * lhs, const mission_interfaces__msg__MissionStatus * rhs)
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
  // stage
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stage), &(rhs->stage)))
  {
    return false;
  }
  // state_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state_text), &(rhs->state_text)))
  {
    return false;
  }
  // countdown
  if (lhs->countdown != rhs->countdown) {
    return false;
  }
  // reference_ready
  if (lhs->reference_ready != rhs->reference_ready) {
    return false;
  }
  return true;
}

bool
mission_interfaces__msg__MissionStatus__copy(
  const mission_interfaces__msg__MissionStatus * input,
  mission_interfaces__msg__MissionStatus * output)
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
  // stage
  if (!rosidl_runtime_c__String__copy(
      &(input->stage), &(output->stage)))
  {
    return false;
  }
  // state_text
  if (!rosidl_runtime_c__String__copy(
      &(input->state_text), &(output->state_text)))
  {
    return false;
  }
  // countdown
  output->countdown = input->countdown;
  // reference_ready
  output->reference_ready = input->reference_ready;
  return true;
}

mission_interfaces__msg__MissionStatus *
mission_interfaces__msg__MissionStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__MissionStatus * msg = (mission_interfaces__msg__MissionStatus *)allocator.allocate(sizeof(mission_interfaces__msg__MissionStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__msg__MissionStatus));
  bool success = mission_interfaces__msg__MissionStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__msg__MissionStatus__destroy(mission_interfaces__msg__MissionStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__msg__MissionStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__msg__MissionStatus__Sequence__init(mission_interfaces__msg__MissionStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__MissionStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__msg__MissionStatus)) {
      return false;
    }
    data = (mission_interfaces__msg__MissionStatus *)allocator.zero_allocate(size, sizeof(mission_interfaces__msg__MissionStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__msg__MissionStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__msg__MissionStatus__fini(&data[i - 1]);
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
mission_interfaces__msg__MissionStatus__Sequence__fini(mission_interfaces__msg__MissionStatus__Sequence * array)
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
      mission_interfaces__msg__MissionStatus__fini(&array->data[i]);
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

mission_interfaces__msg__MissionStatus__Sequence *
mission_interfaces__msg__MissionStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__MissionStatus__Sequence * array = (mission_interfaces__msg__MissionStatus__Sequence *)allocator.allocate(sizeof(mission_interfaces__msg__MissionStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__msg__MissionStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__msg__MissionStatus__Sequence__destroy(mission_interfaces__msg__MissionStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__msg__MissionStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__msg__MissionStatus__Sequence__are_equal(const mission_interfaces__msg__MissionStatus__Sequence * lhs, const mission_interfaces__msg__MissionStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__msg__MissionStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__msg__MissionStatus__Sequence__copy(
  const mission_interfaces__msg__MissionStatus__Sequence * input,
  mission_interfaces__msg__MissionStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__msg__MissionStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__msg__MissionStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__msg__MissionStatus * data =
      (mission_interfaces__msg__MissionStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__msg__MissionStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__msg__MissionStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__msg__MissionStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
