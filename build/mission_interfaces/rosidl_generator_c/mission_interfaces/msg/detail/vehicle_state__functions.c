// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mission_interfaces:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mode`
// Member `controller`
#include "rosidl_runtime_c/string_functions.h"

bool
mission_interfaces__msg__VehicleState__init(mission_interfaces__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mission_interfaces__msg__VehicleState__fini(msg);
    return false;
  }
  // valid
  // ready
  // armed
  // airborne
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    mission_interfaces__msg__VehicleState__fini(msg);
    return false;
  }
  // controller
  if (!rosidl_runtime_c__String__init(&msg->controller)) {
    mission_interfaces__msg__VehicleState__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // heading
  // vx
  // vy
  // vz
  // alt_rel
  // roll
  // pitch
  // xy_global
  // ref_lat
  // ref_lon
  return true;
}

void
mission_interfaces__msg__VehicleState__fini(mission_interfaces__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // valid
  // ready
  // armed
  // airborne
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // controller
  rosidl_runtime_c__String__fini(&msg->controller);
  // x
  // y
  // z
  // heading
  // vx
  // vy
  // vz
  // alt_rel
  // roll
  // pitch
  // xy_global
  // ref_lat
  // ref_lon
}

bool
mission_interfaces__msg__VehicleState__are_equal(const mission_interfaces__msg__VehicleState * lhs, const mission_interfaces__msg__VehicleState * rhs)
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
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // ready
  if (lhs->ready != rhs->ready) {
    return false;
  }
  // armed
  if (lhs->armed != rhs->armed) {
    return false;
  }
  // airborne
  if (lhs->airborne != rhs->airborne) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // controller
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->controller), &(rhs->controller)))
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
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // alt_rel
  if (lhs->alt_rel != rhs->alt_rel) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // xy_global
  if (lhs->xy_global != rhs->xy_global) {
    return false;
  }
  // ref_lat
  if (lhs->ref_lat != rhs->ref_lat) {
    return false;
  }
  // ref_lon
  if (lhs->ref_lon != rhs->ref_lon) {
    return false;
  }
  return true;
}

bool
mission_interfaces__msg__VehicleState__copy(
  const mission_interfaces__msg__VehicleState * input,
  mission_interfaces__msg__VehicleState * output)
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
  // valid
  output->valid = input->valid;
  // ready
  output->ready = input->ready;
  // armed
  output->armed = input->armed;
  // airborne
  output->airborne = input->airborne;
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // controller
  if (!rosidl_runtime_c__String__copy(
      &(input->controller), &(output->controller)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // heading
  output->heading = input->heading;
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // alt_rel
  output->alt_rel = input->alt_rel;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // xy_global
  output->xy_global = input->xy_global;
  // ref_lat
  output->ref_lat = input->ref_lat;
  // ref_lon
  output->ref_lon = input->ref_lon;
  return true;
}

mission_interfaces__msg__VehicleState *
mission_interfaces__msg__VehicleState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__VehicleState * msg = (mission_interfaces__msg__VehicleState *)allocator.allocate(sizeof(mission_interfaces__msg__VehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__msg__VehicleState));
  bool success = mission_interfaces__msg__VehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__msg__VehicleState__destroy(mission_interfaces__msg__VehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__msg__VehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__msg__VehicleState__Sequence__init(mission_interfaces__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__VehicleState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__msg__VehicleState)) {
      return false;
    }
    data = (mission_interfaces__msg__VehicleState *)allocator.zero_allocate(size, sizeof(mission_interfaces__msg__VehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__msg__VehicleState__fini(&data[i - 1]);
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
mission_interfaces__msg__VehicleState__Sequence__fini(mission_interfaces__msg__VehicleState__Sequence * array)
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
      mission_interfaces__msg__VehicleState__fini(&array->data[i]);
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

mission_interfaces__msg__VehicleState__Sequence *
mission_interfaces__msg__VehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__VehicleState__Sequence * array = (mission_interfaces__msg__VehicleState__Sequence *)allocator.allocate(sizeof(mission_interfaces__msg__VehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__msg__VehicleState__Sequence__destroy(mission_interfaces__msg__VehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__msg__VehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__msg__VehicleState__Sequence__are_equal(const mission_interfaces__msg__VehicleState__Sequence * lhs, const mission_interfaces__msg__VehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__msg__VehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__msg__VehicleState__Sequence__copy(
  const mission_interfaces__msg__VehicleState__Sequence * input,
  mission_interfaces__msg__VehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__msg__VehicleState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__msg__VehicleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__msg__VehicleState * data =
      (mission_interfaces__msg__VehicleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__msg__VehicleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__msg__VehicleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__msg__VehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
