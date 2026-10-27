// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mission_interfaces:action/SearchTarget.idl
// generated code does not contain a copyright notice
#include "mission_interfaces/action/detail/search_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `geofence_file`
#include "rosidl_runtime_c/string_functions.h"

bool
mission_interfaces__action__SearchTarget_Goal__init(mission_interfaces__action__SearchTarget_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // geofence_file
  if (!rosidl_runtime_c__String__init(&msg->geofence_file)) {
    mission_interfaces__action__SearchTarget_Goal__fini(msg);
    return false;
  }
  // altitude
  // yaw
  // wall_margin
  // overlap
  // rows
  // speed
  // red_zone_margin
  // confirm_matches
  // max_revisits
  // revisit_time
  // skip_fly_to_target
  return true;
}

void
mission_interfaces__action__SearchTarget_Goal__fini(mission_interfaces__action__SearchTarget_Goal * msg)
{
  if (!msg) {
    return;
  }
  // geofence_file
  rosidl_runtime_c__String__fini(&msg->geofence_file);
  // altitude
  // yaw
  // wall_margin
  // overlap
  // rows
  // speed
  // red_zone_margin
  // confirm_matches
  // max_revisits
  // revisit_time
  // skip_fly_to_target
}

bool
mission_interfaces__action__SearchTarget_Goal__are_equal(const mission_interfaces__action__SearchTarget_Goal * lhs, const mission_interfaces__action__SearchTarget_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // geofence_file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->geofence_file), &(rhs->geofence_file)))
  {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // wall_margin
  if (lhs->wall_margin != rhs->wall_margin) {
    return false;
  }
  // overlap
  if (lhs->overlap != rhs->overlap) {
    return false;
  }
  // rows
  if (lhs->rows != rhs->rows) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // red_zone_margin
  if (lhs->red_zone_margin != rhs->red_zone_margin) {
    return false;
  }
  // confirm_matches
  if (lhs->confirm_matches != rhs->confirm_matches) {
    return false;
  }
  // max_revisits
  if (lhs->max_revisits != rhs->max_revisits) {
    return false;
  }
  // revisit_time
  if (lhs->revisit_time != rhs->revisit_time) {
    return false;
  }
  // skip_fly_to_target
  if (lhs->skip_fly_to_target != rhs->skip_fly_to_target) {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_Goal__copy(
  const mission_interfaces__action__SearchTarget_Goal * input,
  mission_interfaces__action__SearchTarget_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // geofence_file
  if (!rosidl_runtime_c__String__copy(
      &(input->geofence_file), &(output->geofence_file)))
  {
    return false;
  }
  // altitude
  output->altitude = input->altitude;
  // yaw
  output->yaw = input->yaw;
  // wall_margin
  output->wall_margin = input->wall_margin;
  // overlap
  output->overlap = input->overlap;
  // rows
  output->rows = input->rows;
  // speed
  output->speed = input->speed;
  // red_zone_margin
  output->red_zone_margin = input->red_zone_margin;
  // confirm_matches
  output->confirm_matches = input->confirm_matches;
  // max_revisits
  output->max_revisits = input->max_revisits;
  // revisit_time
  output->revisit_time = input->revisit_time;
  // skip_fly_to_target
  output->skip_fly_to_target = input->skip_fly_to_target;
  return true;
}

mission_interfaces__action__SearchTarget_Goal *
mission_interfaces__action__SearchTarget_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_Goal * msg = (mission_interfaces__action__SearchTarget_Goal *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__SearchTarget_Goal));
  bool success = mission_interfaces__action__SearchTarget_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__SearchTarget_Goal__destroy(mission_interfaces__action__SearchTarget_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__SearchTarget_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__SearchTarget_Goal__Sequence__init(mission_interfaces__action__SearchTarget_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_Goal)) {
      return false;
    }
    data = (mission_interfaces__action__SearchTarget_Goal *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__SearchTarget_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__SearchTarget_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__SearchTarget_Goal__fini(&data[i - 1]);
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
mission_interfaces__action__SearchTarget_Goal__Sequence__fini(mission_interfaces__action__SearchTarget_Goal__Sequence * array)
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
      mission_interfaces__action__SearchTarget_Goal__fini(&array->data[i]);
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

mission_interfaces__action__SearchTarget_Goal__Sequence *
mission_interfaces__action__SearchTarget_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_Goal__Sequence * array = (mission_interfaces__action__SearchTarget_Goal__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__SearchTarget_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__SearchTarget_Goal__Sequence__destroy(mission_interfaces__action__SearchTarget_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__SearchTarget_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__SearchTarget_Goal__Sequence__are_equal(const mission_interfaces__action__SearchTarget_Goal__Sequence * lhs, const mission_interfaces__action__SearchTarget_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_Goal__Sequence__copy(
  const mission_interfaces__action__SearchTarget_Goal__Sequence * input,
  mission_interfaces__action__SearchTarget_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__SearchTarget_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__SearchTarget_Goal * data =
      (mission_interfaces__action__SearchTarget_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__SearchTarget_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__SearchTarget_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// Member `decoded_text`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `target`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
mission_interfaces__action__SearchTarget_Result__init(mission_interfaces__action__SearchTarget_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    mission_interfaces__action__SearchTarget_Result__fini(msg);
    return false;
  }
  // matched
  // score
  // decoded_text
  if (!rosidl_runtime_c__String__init(&msg->decoded_text)) {
    mission_interfaces__action__SearchTarget_Result__fini(msg);
    return false;
  }
  // target
  if (!geometry_msgs__msg__Point__init(&msg->target)) {
    mission_interfaces__action__SearchTarget_Result__fini(msg);
    return false;
  }
  // latitude
  // longitude
  // red_zones
  // coverage
  return true;
}

void
mission_interfaces__action__SearchTarget_Result__fini(mission_interfaces__action__SearchTarget_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // matched
  // score
  // decoded_text
  rosidl_runtime_c__String__fini(&msg->decoded_text);
  // target
  geometry_msgs__msg__Point__fini(&msg->target);
  // latitude
  // longitude
  // red_zones
  // coverage
}

bool
mission_interfaces__action__SearchTarget_Result__are_equal(const mission_interfaces__action__SearchTarget_Result * lhs, const mission_interfaces__action__SearchTarget_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // matched
  if (lhs->matched != rhs->matched) {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // decoded_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->decoded_text), &(rhs->decoded_text)))
  {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // red_zones
  if (lhs->red_zones != rhs->red_zones) {
    return false;
  }
  // coverage
  if (lhs->coverage != rhs->coverage) {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_Result__copy(
  const mission_interfaces__action__SearchTarget_Result * input,
  mission_interfaces__action__SearchTarget_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // matched
  output->matched = input->matched;
  // score
  output->score = input->score;
  // decoded_text
  if (!rosidl_runtime_c__String__copy(
      &(input->decoded_text), &(output->decoded_text)))
  {
    return false;
  }
  // target
  if (!geometry_msgs__msg__Point__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  // latitude
  output->latitude = input->latitude;
  // longitude
  output->longitude = input->longitude;
  // red_zones
  output->red_zones = input->red_zones;
  // coverage
  output->coverage = input->coverage;
  return true;
}

mission_interfaces__action__SearchTarget_Result *
mission_interfaces__action__SearchTarget_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_Result * msg = (mission_interfaces__action__SearchTarget_Result *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__SearchTarget_Result));
  bool success = mission_interfaces__action__SearchTarget_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__SearchTarget_Result__destroy(mission_interfaces__action__SearchTarget_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__SearchTarget_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__SearchTarget_Result__Sequence__init(mission_interfaces__action__SearchTarget_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_Result)) {
      return false;
    }
    data = (mission_interfaces__action__SearchTarget_Result *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__SearchTarget_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__SearchTarget_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__SearchTarget_Result__fini(&data[i - 1]);
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
mission_interfaces__action__SearchTarget_Result__Sequence__fini(mission_interfaces__action__SearchTarget_Result__Sequence * array)
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
      mission_interfaces__action__SearchTarget_Result__fini(&array->data[i]);
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

mission_interfaces__action__SearchTarget_Result__Sequence *
mission_interfaces__action__SearchTarget_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_Result__Sequence * array = (mission_interfaces__action__SearchTarget_Result__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__SearchTarget_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__SearchTarget_Result__Sequence__destroy(mission_interfaces__action__SearchTarget_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__SearchTarget_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__SearchTarget_Result__Sequence__are_equal(const mission_interfaces__action__SearchTarget_Result__Sequence * lhs, const mission_interfaces__action__SearchTarget_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_Result__Sequence__copy(
  const mission_interfaces__action__SearchTarget_Result__Sequence * input,
  mission_interfaces__action__SearchTarget_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__SearchTarget_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__SearchTarget_Result * data =
      (mission_interfaces__action__SearchTarget_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__SearchTarget_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__SearchTarget_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// Member `steering`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
mission_interfaces__action__SearchTarget_Feedback__init(mission_interfaces__action__SearchTarget_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    mission_interfaces__action__SearchTarget_Feedback__fini(msg);
    return false;
  }
  // steering
  if (!rosidl_runtime_c__String__init(&msg->steering)) {
    mission_interfaces__action__SearchTarget_Feedback__fini(msg);
    return false;
  }
  // best_score
  // red_zones
  return true;
}

void
mission_interfaces__action__SearchTarget_Feedback__fini(mission_interfaces__action__SearchTarget_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // steering
  rosidl_runtime_c__String__fini(&msg->steering);
  // best_score
  // red_zones
}

bool
mission_interfaces__action__SearchTarget_Feedback__are_equal(const mission_interfaces__action__SearchTarget_Feedback * lhs, const mission_interfaces__action__SearchTarget_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // steering
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->steering), &(rhs->steering)))
  {
    return false;
  }
  // best_score
  if (lhs->best_score != rhs->best_score) {
    return false;
  }
  // red_zones
  if (lhs->red_zones != rhs->red_zones) {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_Feedback__copy(
  const mission_interfaces__action__SearchTarget_Feedback * input,
  mission_interfaces__action__SearchTarget_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // steering
  if (!rosidl_runtime_c__String__copy(
      &(input->steering), &(output->steering)))
  {
    return false;
  }
  // best_score
  output->best_score = input->best_score;
  // red_zones
  output->red_zones = input->red_zones;
  return true;
}

mission_interfaces__action__SearchTarget_Feedback *
mission_interfaces__action__SearchTarget_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_Feedback * msg = (mission_interfaces__action__SearchTarget_Feedback *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__SearchTarget_Feedback));
  bool success = mission_interfaces__action__SearchTarget_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__SearchTarget_Feedback__destroy(mission_interfaces__action__SearchTarget_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__SearchTarget_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__SearchTarget_Feedback__Sequence__init(mission_interfaces__action__SearchTarget_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_Feedback)) {
      return false;
    }
    data = (mission_interfaces__action__SearchTarget_Feedback *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__SearchTarget_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__SearchTarget_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__SearchTarget_Feedback__fini(&data[i - 1]);
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
mission_interfaces__action__SearchTarget_Feedback__Sequence__fini(mission_interfaces__action__SearchTarget_Feedback__Sequence * array)
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
      mission_interfaces__action__SearchTarget_Feedback__fini(&array->data[i]);
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

mission_interfaces__action__SearchTarget_Feedback__Sequence *
mission_interfaces__action__SearchTarget_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_Feedback__Sequence * array = (mission_interfaces__action__SearchTarget_Feedback__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__SearchTarget_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__SearchTarget_Feedback__Sequence__destroy(mission_interfaces__action__SearchTarget_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__SearchTarget_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__SearchTarget_Feedback__Sequence__are_equal(const mission_interfaces__action__SearchTarget_Feedback__Sequence * lhs, const mission_interfaces__action__SearchTarget_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_Feedback__Sequence__copy(
  const mission_interfaces__action__SearchTarget_Feedback__Sequence * input,
  mission_interfaces__action__SearchTarget_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__SearchTarget_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__SearchTarget_Feedback * data =
      (mission_interfaces__action__SearchTarget_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__SearchTarget_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__SearchTarget_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "mission_interfaces/action/detail/search_target__functions.h"

bool
mission_interfaces__action__SearchTarget_SendGoal_Request__init(mission_interfaces__action__SearchTarget_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mission_interfaces__action__SearchTarget_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!mission_interfaces__action__SearchTarget_Goal__init(&msg->goal)) {
    mission_interfaces__action__SearchTarget_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__SearchTarget_SendGoal_Request__fini(mission_interfaces__action__SearchTarget_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  mission_interfaces__action__SearchTarget_Goal__fini(&msg->goal);
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Request__are_equal(const mission_interfaces__action__SearchTarget_SendGoal_Request * lhs, const mission_interfaces__action__SearchTarget_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!mission_interfaces__action__SearchTarget_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Request__copy(
  const mission_interfaces__action__SearchTarget_SendGoal_Request * input,
  mission_interfaces__action__SearchTarget_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!mission_interfaces__action__SearchTarget_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__SearchTarget_SendGoal_Request *
mission_interfaces__action__SearchTarget_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_SendGoal_Request * msg = (mission_interfaces__action__SearchTarget_SendGoal_Request *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__SearchTarget_SendGoal_Request));
  bool success = mission_interfaces__action__SearchTarget_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__SearchTarget_SendGoal_Request__destroy(mission_interfaces__action__SearchTarget_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__SearchTarget_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__init(mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_SendGoal_Request)) {
      return false;
    }
    data = (mission_interfaces__action__SearchTarget_SendGoal_Request *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__SearchTarget_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__SearchTarget_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__SearchTarget_SendGoal_Request__fini(&data[i - 1]);
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
mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__fini(mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence * array)
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
      mission_interfaces__action__SearchTarget_SendGoal_Request__fini(&array->data[i]);
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

mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence *
mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence * array = (mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__destroy(mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__are_equal(const mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence * lhs, const mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__copy(
  const mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence * input,
  mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__SearchTarget_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__SearchTarget_SendGoal_Request * data =
      (mission_interfaces__action__SearchTarget_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__SearchTarget_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__SearchTarget_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mission_interfaces__action__SearchTarget_SendGoal_Response__init(mission_interfaces__action__SearchTarget_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mission_interfaces__action__SearchTarget_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__SearchTarget_SendGoal_Response__fini(mission_interfaces__action__SearchTarget_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Response__are_equal(const mission_interfaces__action__SearchTarget_SendGoal_Response * lhs, const mission_interfaces__action__SearchTarget_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Response__copy(
  const mission_interfaces__action__SearchTarget_SendGoal_Response * input,
  mission_interfaces__action__SearchTarget_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__SearchTarget_SendGoal_Response *
mission_interfaces__action__SearchTarget_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_SendGoal_Response * msg = (mission_interfaces__action__SearchTarget_SendGoal_Response *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__SearchTarget_SendGoal_Response));
  bool success = mission_interfaces__action__SearchTarget_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__SearchTarget_SendGoal_Response__destroy(mission_interfaces__action__SearchTarget_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__SearchTarget_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__init(mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_SendGoal_Response)) {
      return false;
    }
    data = (mission_interfaces__action__SearchTarget_SendGoal_Response *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__SearchTarget_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__SearchTarget_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__SearchTarget_SendGoal_Response__fini(&data[i - 1]);
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
mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__fini(mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence * array)
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
      mission_interfaces__action__SearchTarget_SendGoal_Response__fini(&array->data[i]);
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

mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence *
mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence * array = (mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__destroy(mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__are_equal(const mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence * lhs, const mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__copy(
  const mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence * input,
  mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__SearchTarget_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__SearchTarget_SendGoal_Response * data =
      (mission_interfaces__action__SearchTarget_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__SearchTarget_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__SearchTarget_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mission_interfaces/action/detail/search_target__functions.h"

bool
mission_interfaces__action__SearchTarget_SendGoal_Event__init(mission_interfaces__action__SearchTarget_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mission_interfaces__action__SearchTarget_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    mission_interfaces__action__SearchTarget_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    mission_interfaces__action__SearchTarget_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__SearchTarget_SendGoal_Event__fini(mission_interfaces__action__SearchTarget_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Event__are_equal(const mission_interfaces__action__SearchTarget_SendGoal_Event * lhs, const mission_interfaces__action__SearchTarget_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Event__copy(
  const mission_interfaces__action__SearchTarget_SendGoal_Event * input,
  mission_interfaces__action__SearchTarget_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mission_interfaces__action__SearchTarget_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mission_interfaces__action__SearchTarget_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__SearchTarget_SendGoal_Event *
mission_interfaces__action__SearchTarget_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_SendGoal_Event * msg = (mission_interfaces__action__SearchTarget_SendGoal_Event *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__SearchTarget_SendGoal_Event));
  bool success = mission_interfaces__action__SearchTarget_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__SearchTarget_SendGoal_Event__destroy(mission_interfaces__action__SearchTarget_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__SearchTarget_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence__init(mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_SendGoal_Event)) {
      return false;
    }
    data = (mission_interfaces__action__SearchTarget_SendGoal_Event *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__SearchTarget_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__SearchTarget_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__SearchTarget_SendGoal_Event__fini(&data[i - 1]);
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
mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence__fini(mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence * array)
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
      mission_interfaces__action__SearchTarget_SendGoal_Event__fini(&array->data[i]);
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

mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence *
mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence * array = (mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence__destroy(mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence__are_equal(const mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence * lhs, const mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence__copy(
  const mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence * input,
  mission_interfaces__action__SearchTarget_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__SearchTarget_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__SearchTarget_SendGoal_Event * data =
      (mission_interfaces__action__SearchTarget_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__SearchTarget_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__SearchTarget_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
mission_interfaces__action__SearchTarget_GetResult_Request__init(mission_interfaces__action__SearchTarget_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mission_interfaces__action__SearchTarget_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__SearchTarget_GetResult_Request__fini(mission_interfaces__action__SearchTarget_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
mission_interfaces__action__SearchTarget_GetResult_Request__are_equal(const mission_interfaces__action__SearchTarget_GetResult_Request * lhs, const mission_interfaces__action__SearchTarget_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_GetResult_Request__copy(
  const mission_interfaces__action__SearchTarget_GetResult_Request * input,
  mission_interfaces__action__SearchTarget_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__SearchTarget_GetResult_Request *
mission_interfaces__action__SearchTarget_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_GetResult_Request * msg = (mission_interfaces__action__SearchTarget_GetResult_Request *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__SearchTarget_GetResult_Request));
  bool success = mission_interfaces__action__SearchTarget_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__SearchTarget_GetResult_Request__destroy(mission_interfaces__action__SearchTarget_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__SearchTarget_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__init(mission_interfaces__action__SearchTarget_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_GetResult_Request)) {
      return false;
    }
    data = (mission_interfaces__action__SearchTarget_GetResult_Request *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__SearchTarget_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__SearchTarget_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__SearchTarget_GetResult_Request__fini(&data[i - 1]);
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
mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__fini(mission_interfaces__action__SearchTarget_GetResult_Request__Sequence * array)
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
      mission_interfaces__action__SearchTarget_GetResult_Request__fini(&array->data[i]);
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

mission_interfaces__action__SearchTarget_GetResult_Request__Sequence *
mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_GetResult_Request__Sequence * array = (mission_interfaces__action__SearchTarget_GetResult_Request__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__destroy(mission_interfaces__action__SearchTarget_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__are_equal(const mission_interfaces__action__SearchTarget_GetResult_Request__Sequence * lhs, const mission_interfaces__action__SearchTarget_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__copy(
  const mission_interfaces__action__SearchTarget_GetResult_Request__Sequence * input,
  mission_interfaces__action__SearchTarget_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__SearchTarget_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__SearchTarget_GetResult_Request * data =
      (mission_interfaces__action__SearchTarget_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__SearchTarget_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__SearchTarget_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "mission_interfaces/action/detail/search_target__functions.h"

bool
mission_interfaces__action__SearchTarget_GetResult_Response__init(mission_interfaces__action__SearchTarget_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!mission_interfaces__action__SearchTarget_Result__init(&msg->result)) {
    mission_interfaces__action__SearchTarget_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__SearchTarget_GetResult_Response__fini(mission_interfaces__action__SearchTarget_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  mission_interfaces__action__SearchTarget_Result__fini(&msg->result);
}

bool
mission_interfaces__action__SearchTarget_GetResult_Response__are_equal(const mission_interfaces__action__SearchTarget_GetResult_Response * lhs, const mission_interfaces__action__SearchTarget_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!mission_interfaces__action__SearchTarget_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_GetResult_Response__copy(
  const mission_interfaces__action__SearchTarget_GetResult_Response * input,
  mission_interfaces__action__SearchTarget_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!mission_interfaces__action__SearchTarget_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__SearchTarget_GetResult_Response *
mission_interfaces__action__SearchTarget_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_GetResult_Response * msg = (mission_interfaces__action__SearchTarget_GetResult_Response *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__SearchTarget_GetResult_Response));
  bool success = mission_interfaces__action__SearchTarget_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__SearchTarget_GetResult_Response__destroy(mission_interfaces__action__SearchTarget_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__SearchTarget_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__init(mission_interfaces__action__SearchTarget_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_GetResult_Response)) {
      return false;
    }
    data = (mission_interfaces__action__SearchTarget_GetResult_Response *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__SearchTarget_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__SearchTarget_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__SearchTarget_GetResult_Response__fini(&data[i - 1]);
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
mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__fini(mission_interfaces__action__SearchTarget_GetResult_Response__Sequence * array)
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
      mission_interfaces__action__SearchTarget_GetResult_Response__fini(&array->data[i]);
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

mission_interfaces__action__SearchTarget_GetResult_Response__Sequence *
mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_GetResult_Response__Sequence * array = (mission_interfaces__action__SearchTarget_GetResult_Response__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__destroy(mission_interfaces__action__SearchTarget_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__are_equal(const mission_interfaces__action__SearchTarget_GetResult_Response__Sequence * lhs, const mission_interfaces__action__SearchTarget_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__copy(
  const mission_interfaces__action__SearchTarget_GetResult_Response__Sequence * input,
  mission_interfaces__action__SearchTarget_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__SearchTarget_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__SearchTarget_GetResult_Response * data =
      (mission_interfaces__action__SearchTarget_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__SearchTarget_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__SearchTarget_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mission_interfaces/action/detail/search_target__functions.h"

bool
mission_interfaces__action__SearchTarget_GetResult_Event__init(mission_interfaces__action__SearchTarget_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mission_interfaces__action__SearchTarget_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__init(&msg->request, 0)) {
    mission_interfaces__action__SearchTarget_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__init(&msg->response, 0)) {
    mission_interfaces__action__SearchTarget_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__SearchTarget_GetResult_Event__fini(mission_interfaces__action__SearchTarget_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__fini(&msg->request);
  // response
  mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__fini(&msg->response);
}

bool
mission_interfaces__action__SearchTarget_GetResult_Event__are_equal(const mission_interfaces__action__SearchTarget_GetResult_Event * lhs, const mission_interfaces__action__SearchTarget_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_GetResult_Event__copy(
  const mission_interfaces__action__SearchTarget_GetResult_Event * input,
  mission_interfaces__action__SearchTarget_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mission_interfaces__action__SearchTarget_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mission_interfaces__action__SearchTarget_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__SearchTarget_GetResult_Event *
mission_interfaces__action__SearchTarget_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_GetResult_Event * msg = (mission_interfaces__action__SearchTarget_GetResult_Event *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__SearchTarget_GetResult_Event));
  bool success = mission_interfaces__action__SearchTarget_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__SearchTarget_GetResult_Event__destroy(mission_interfaces__action__SearchTarget_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__SearchTarget_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__SearchTarget_GetResult_Event__Sequence__init(mission_interfaces__action__SearchTarget_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_GetResult_Event)) {
      return false;
    }
    data = (mission_interfaces__action__SearchTarget_GetResult_Event *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__SearchTarget_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__SearchTarget_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__SearchTarget_GetResult_Event__fini(&data[i - 1]);
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
mission_interfaces__action__SearchTarget_GetResult_Event__Sequence__fini(mission_interfaces__action__SearchTarget_GetResult_Event__Sequence * array)
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
      mission_interfaces__action__SearchTarget_GetResult_Event__fini(&array->data[i]);
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

mission_interfaces__action__SearchTarget_GetResult_Event__Sequence *
mission_interfaces__action__SearchTarget_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_GetResult_Event__Sequence * array = (mission_interfaces__action__SearchTarget_GetResult_Event__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__SearchTarget_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__SearchTarget_GetResult_Event__Sequence__destroy(mission_interfaces__action__SearchTarget_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__SearchTarget_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__SearchTarget_GetResult_Event__Sequence__are_equal(const mission_interfaces__action__SearchTarget_GetResult_Event__Sequence * lhs, const mission_interfaces__action__SearchTarget_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_GetResult_Event__Sequence__copy(
  const mission_interfaces__action__SearchTarget_GetResult_Event__Sequence * input,
  mission_interfaces__action__SearchTarget_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__SearchTarget_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__SearchTarget_GetResult_Event * data =
      (mission_interfaces__action__SearchTarget_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__SearchTarget_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__SearchTarget_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "mission_interfaces/action/detail/search_target__functions.h"

bool
mission_interfaces__action__SearchTarget_FeedbackMessage__init(mission_interfaces__action__SearchTarget_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mission_interfaces__action__SearchTarget_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!mission_interfaces__action__SearchTarget_Feedback__init(&msg->feedback)) {
    mission_interfaces__action__SearchTarget_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
mission_interfaces__action__SearchTarget_FeedbackMessage__fini(mission_interfaces__action__SearchTarget_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  mission_interfaces__action__SearchTarget_Feedback__fini(&msg->feedback);
}

bool
mission_interfaces__action__SearchTarget_FeedbackMessage__are_equal(const mission_interfaces__action__SearchTarget_FeedbackMessage * lhs, const mission_interfaces__action__SearchTarget_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mission_interfaces__action__SearchTarget_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_FeedbackMessage__copy(
  const mission_interfaces__action__SearchTarget_FeedbackMessage * input,
  mission_interfaces__action__SearchTarget_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mission_interfaces__action__SearchTarget_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

mission_interfaces__action__SearchTarget_FeedbackMessage *
mission_interfaces__action__SearchTarget_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_FeedbackMessage * msg = (mission_interfaces__action__SearchTarget_FeedbackMessage *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mission_interfaces__action__SearchTarget_FeedbackMessage));
  bool success = mission_interfaces__action__SearchTarget_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mission_interfaces__action__SearchTarget_FeedbackMessage__destroy(mission_interfaces__action__SearchTarget_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mission_interfaces__action__SearchTarget_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__init(mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_FeedbackMessage)) {
      return false;
    }
    data = (mission_interfaces__action__SearchTarget_FeedbackMessage *)allocator.zero_allocate(size, sizeof(mission_interfaces__action__SearchTarget_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mission_interfaces__action__SearchTarget_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mission_interfaces__action__SearchTarget_FeedbackMessage__fini(&data[i - 1]);
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
mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__fini(mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence * array)
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
      mission_interfaces__action__SearchTarget_FeedbackMessage__fini(&array->data[i]);
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

mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence *
mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence * array = (mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence *)allocator.allocate(sizeof(mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__destroy(mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__are_equal(const mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence * lhs, const mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence__copy(
  const mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence * input,
  mission_interfaces__action__SearchTarget_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(mission_interfaces__action__SearchTarget_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(mission_interfaces__action__SearchTarget_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mission_interfaces__action__SearchTarget_FeedbackMessage * data =
      (mission_interfaces__action__SearchTarget_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mission_interfaces__action__SearchTarget_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mission_interfaces__action__SearchTarget_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mission_interfaces__action__SearchTarget_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
