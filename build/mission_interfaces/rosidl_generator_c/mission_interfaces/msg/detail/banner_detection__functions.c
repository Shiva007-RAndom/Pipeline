// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mission_interfaces:msg/BannerDetection.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/msg/detail/banner_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `color`
// Member `source`
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `position_estimate`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
mission_interfaces__msg__BannerDetection__init(mission_interfaces__msg__BannerDetection * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mission_interfaces__msg__BannerDetection__fini(msg);
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    mission_interfaces__msg__BannerDetection__fini(msg);
    return false;
  }
  // detected
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    mission_interfaces__msg__BannerDetection__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    mission_interfaces__msg__BannerDetection__fini(msg);
    return false;
  }
  // u
  // v
  // quad
  // angle
  // partial
  // image_width
  // image_height
  // candidates
  // consecutive_hits
  // pose_valid
  // alt_rel
  // drone_x
  // drone_y
  // drone_z
  // drone_heading
  // position_estimate
  if (!geometry_msgs__msg__Point__init(&msg->position_estimate)) {
    mission_interfaces__msg__BannerDetection__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__msg__BannerDetection__fini(mission_interfaces__msg__BannerDetection * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // color
  rosidl_runtime_c__String__fini(&msg->color);
  // detected
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // u
  // v
  // quad
  // angle
  // partial
  // image_width
  // image_height
  // candidates
  // consecutive_hits
  // pose_valid
  // alt_rel
  // drone_x
  // drone_y
  // drone_z
  // drone_heading
  // position_estimate
  geometry_msgs__msg__Point__fini(&msg->position_estimate);
}

bool
mission_interfaces__msg__BannerDetection__are_equal(const mission_interfaces__msg__BannerDetection * lhs, const mission_interfaces__msg__BannerDetection * rhs)
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
  // color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // detected
  if (lhs->detected != rhs->detected) {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // u
  if (lhs->u != rhs->u) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // quad
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->quad[i] != rhs->quad[i]) {
      return false;
    }
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // partial
  if (lhs->partial != rhs->partial) {
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
  // candidates
  if (lhs->candidates != rhs->candidates) {
    return false;
  }
  // consecutive_hits
  if (lhs->consecutive_hits != rhs->consecutive_hits) {
    return false;
  }
  // pose_valid
  if (lhs->pose_valid != rhs->pose_valid) {
    return false;
  }
  // alt_rel
  if (lhs->alt_rel != rhs->alt_rel) {
    return false;
  }
  // drone_x
  if (lhs->drone_x != rhs->drone_x) {
    return false;
  }
  // drone_y
  if (lhs->drone_y != rhs->drone_y) {
    return false;
  }
  // drone_z
  if (lhs->drone_z != rhs->drone_z) {
    return false;
  }
  // drone_heading
  if (lhs->drone_heading != rhs->drone_heading) {
    return false;
  }
  // position_estimate
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position_estimate), &(rhs->position_estimate)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__msg__BannerDetection__copy(
  const mission_interfaces__msg__BannerDetection * input,
  mission_interfaces__msg__BannerDetection * output)
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
  // color
  if (!rosidl_runtime_c__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // detected
  output->detected = input->detected;
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // u
  output->u = input->u;
  // v
  output->v = input->v;
  // quad
  for (size_t i = 0; i < 8; ++i) {
    output->quad[i] = input->quad[i];
  }
  // angle
  output->angle = input->angle;
  // partial
  output->partial = input->partial;
  // image_width
  output->image_width = input->image_width;
  // image_height
  output->image_height = input->image_height;
  // candidates
  output->candidates = input->candidates;
  // consecutive_hits
  output->consecutive_hits = input->consecutive_hits;
  // pose_valid
  output->pose_valid = input->pose_valid;
  // alt_rel
  output->alt_rel = input->alt_rel;
  // drone_x
  output->drone_x = input->drone_x;
  // drone_y
  output->drone_y = input->drone_y;
  // drone_z
  output->drone_z = input->drone_z;
  // drone_heading
  output->drone_heading = input->drone_heading;
  // position_estimate
  if (!geometry_msgs__msg__Point__copy(
      &(input->position_estimate), &(output->position_estimate)))
  {
    return false;
  }
  return true;
}

mission_interfaces__msg__BannerDetection *
mission_interfaces__msg__BannerDetection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__BannerDetection * msg = (mission_interfaces__msg__BannerDetection *)allocator.allocate(sizeof(mission_interfaces__msg__BannerDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__msg__BannerDetection));
  bool success = mission_interfaces__msg__BannerDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__msg__BannerDetection__destroy(mission_interfaces__msg__BannerDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__msg__BannerDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__msg__BannerDetection__Sequence__init(mission_interfaces__msg__BannerDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__BannerDetection * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__msg__BannerDetection)) {
      return false;
    }
    data = (mission_interfaces__msg__BannerDetection *)allocator.zero_allocate(size, sizeof(mission_interfaces__msg__BannerDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__msg__BannerDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__msg__BannerDetection__fini(&data[i - 1]);
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
mission_interfaces__msg__BannerDetection__Sequence__fini(mission_interfaces__msg__BannerDetection__Sequence * array)
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
      mission_interfaces__msg__BannerDetection__fini(&array->data[i]);
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

mission_interfaces__msg__BannerDetection__Sequence *
mission_interfaces__msg__BannerDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__msg__BannerDetection__Sequence * array = (mission_interfaces__msg__BannerDetection__Sequence *)allocator.allocate(sizeof(mission_interfaces__msg__BannerDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__msg__BannerDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__msg__BannerDetection__Sequence__destroy(mission_interfaces__msg__BannerDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__msg__BannerDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__msg__BannerDetection__Sequence__are_equal(const mission_interfaces__msg__BannerDetection__Sequence * lhs, const mission_interfaces__msg__BannerDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__msg__BannerDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__msg__BannerDetection__Sequence__copy(
  const mission_interfaces__msg__BannerDetection__Sequence * input,
  mission_interfaces__msg__BannerDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__msg__BannerDetection)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__msg__BannerDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__msg__BannerDetection * data =
      (mission_interfaces__msg__BannerDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__msg__BannerDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__msg__BannerDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__msg__BannerDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
