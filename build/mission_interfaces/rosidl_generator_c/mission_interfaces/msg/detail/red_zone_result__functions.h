// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mission_interfaces:msg/RedZoneResult.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/msg/red_zone_result.h"


#ifndef MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__FUNCTIONS_H_
#define MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "mission_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "mission_interfaces/msg/detail/red_zone_result__struct.h"

/// Initialize msg/RedZoneResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__msg__RedZoneResult
 * )) before or use
 * mission_interfaces__msg__RedZoneResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__msg__RedZoneResult__init(mission_interfaces__msg__RedZoneResult * msg);

/// Finalize msg/RedZoneResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__msg__RedZoneResult__fini(mission_interfaces__msg__RedZoneResult * msg);

/// Create msg/RedZoneResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__msg__RedZoneResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__msg__RedZoneResult *
mission_interfaces__msg__RedZoneResult__create(void);

/// Destroy msg/RedZoneResult message.
/**
 * It calls
 * mission_interfaces__msg__RedZoneResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__msg__RedZoneResult__destroy(mission_interfaces__msg__RedZoneResult * msg);

/// Check for msg/RedZoneResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__msg__RedZoneResult__are_equal(const mission_interfaces__msg__RedZoneResult * lhs, const mission_interfaces__msg__RedZoneResult * rhs);

/// Copy a msg/RedZoneResult message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__msg__RedZoneResult__copy(
  const mission_interfaces__msg__RedZoneResult * input,
  mission_interfaces__msg__RedZoneResult * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__msg__RedZoneResult__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__msg__RedZoneResult__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__msg__RedZoneResult__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__msg__RedZoneResult__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/RedZoneResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__msg__RedZoneResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__msg__RedZoneResult__Sequence__init(mission_interfaces__msg__RedZoneResult__Sequence * array, size_t size);

/// Finalize array of msg/RedZoneResult messages.
/**
 * It calls
 * mission_interfaces__msg__RedZoneResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__msg__RedZoneResult__Sequence__fini(mission_interfaces__msg__RedZoneResult__Sequence * array);

/// Create array of msg/RedZoneResult messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__msg__RedZoneResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__msg__RedZoneResult__Sequence *
mission_interfaces__msg__RedZoneResult__Sequence__create(size_t size);

/// Destroy array of msg/RedZoneResult messages.
/**
 * It calls
 * mission_interfaces__msg__RedZoneResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__msg__RedZoneResult__Sequence__destroy(mission_interfaces__msg__RedZoneResult__Sequence * array);

/// Check for msg/RedZoneResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__msg__RedZoneResult__Sequence__are_equal(const mission_interfaces__msg__RedZoneResult__Sequence * lhs, const mission_interfaces__msg__RedZoneResult__Sequence * rhs);

/// Copy an array of msg/RedZoneResult messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__msg__RedZoneResult__Sequence__copy(
  const mission_interfaces__msg__RedZoneResult__Sequence * input,
  mission_interfaces__msg__RedZoneResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__MSG__DETAIL__RED_ZONE_RESULT__FUNCTIONS_H_
