// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mission_interfaces:action/NavigateToTarget.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mission_interfaces/action/navigate_to_target.h"


#ifndef MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__FUNCTIONS_H_
#define MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__FUNCTIONS_H_

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

#include "mission_interfaces/action/detail/navigate_to_target__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget__get_type_hash(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget__get_type_description(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget__get_individual_type_description_source(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget__get_type_description_sources(
  const rosidl_action_type_support_t * type_support);

/// Initialize action/NavigateToTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__NavigateToTarget_Goal
 * )) before or use
 * mission_interfaces__action__NavigateToTarget_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Goal__init(mission_interfaces__action__NavigateToTarget_Goal * msg);

/// Finalize action/NavigateToTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Goal__fini(mission_interfaces__action__NavigateToTarget_Goal * msg);

/// Create action/NavigateToTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__NavigateToTarget_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_Goal *
mission_interfaces__action__NavigateToTarget_Goal__create(void);

/// Destroy action/NavigateToTarget message.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Goal__destroy(mission_interfaces__action__NavigateToTarget_Goal * msg);

/// Check for action/NavigateToTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Goal__are_equal(const mission_interfaces__action__NavigateToTarget_Goal * lhs, const mission_interfaces__action__NavigateToTarget_Goal * rhs);

/// Copy a action/NavigateToTarget message.
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
mission_interfaces__action__NavigateToTarget_Goal__copy(
  const mission_interfaces__action__NavigateToTarget_Goal * input,
  mission_interfaces__action__NavigateToTarget_Goal * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_Goal__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_Goal__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_Goal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_Goal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__NavigateToTarget_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Goal__Sequence__init(mission_interfaces__action__NavigateToTarget_Goal__Sequence * array, size_t size);

/// Finalize array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Goal__Sequence__fini(mission_interfaces__action__NavigateToTarget_Goal__Sequence * array);

/// Create array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__NavigateToTarget_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_Goal__Sequence *
mission_interfaces__action__NavigateToTarget_Goal__Sequence__create(size_t size);

/// Destroy array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Goal__Sequence__destroy(mission_interfaces__action__NavigateToTarget_Goal__Sequence * array);

/// Check for action/NavigateToTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Goal__Sequence__are_equal(const mission_interfaces__action__NavigateToTarget_Goal__Sequence * lhs, const mission_interfaces__action__NavigateToTarget_Goal__Sequence * rhs);

/// Copy an array of action/NavigateToTarget messages.
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
mission_interfaces__action__NavigateToTarget_Goal__Sequence__copy(
  const mission_interfaces__action__NavigateToTarget_Goal__Sequence * input,
  mission_interfaces__action__NavigateToTarget_Goal__Sequence * output);

/// Initialize action/NavigateToTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__NavigateToTarget_Result
 * )) before or use
 * mission_interfaces__action__NavigateToTarget_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Result__init(mission_interfaces__action__NavigateToTarget_Result * msg);

/// Finalize action/NavigateToTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Result__fini(mission_interfaces__action__NavigateToTarget_Result * msg);

/// Create action/NavigateToTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__NavigateToTarget_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_Result *
mission_interfaces__action__NavigateToTarget_Result__create(void);

/// Destroy action/NavigateToTarget message.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Result__destroy(mission_interfaces__action__NavigateToTarget_Result * msg);

/// Check for action/NavigateToTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Result__are_equal(const mission_interfaces__action__NavigateToTarget_Result * lhs, const mission_interfaces__action__NavigateToTarget_Result * rhs);

/// Copy a action/NavigateToTarget message.
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
mission_interfaces__action__NavigateToTarget_Result__copy(
  const mission_interfaces__action__NavigateToTarget_Result * input,
  mission_interfaces__action__NavigateToTarget_Result * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_Result__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_Result__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_Result__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_Result__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__NavigateToTarget_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Result__Sequence__init(mission_interfaces__action__NavigateToTarget_Result__Sequence * array, size_t size);

/// Finalize array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Result__Sequence__fini(mission_interfaces__action__NavigateToTarget_Result__Sequence * array);

/// Create array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__NavigateToTarget_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_Result__Sequence *
mission_interfaces__action__NavigateToTarget_Result__Sequence__create(size_t size);

/// Destroy array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Result__Sequence__destroy(mission_interfaces__action__NavigateToTarget_Result__Sequence * array);

/// Check for action/NavigateToTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Result__Sequence__are_equal(const mission_interfaces__action__NavigateToTarget_Result__Sequence * lhs, const mission_interfaces__action__NavigateToTarget_Result__Sequence * rhs);

/// Copy an array of action/NavigateToTarget messages.
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
mission_interfaces__action__NavigateToTarget_Result__Sequence__copy(
  const mission_interfaces__action__NavigateToTarget_Result__Sequence * input,
  mission_interfaces__action__NavigateToTarget_Result__Sequence * output);

/// Initialize action/NavigateToTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__NavigateToTarget_Feedback
 * )) before or use
 * mission_interfaces__action__NavigateToTarget_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Feedback__init(mission_interfaces__action__NavigateToTarget_Feedback * msg);

/// Finalize action/NavigateToTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Feedback__fini(mission_interfaces__action__NavigateToTarget_Feedback * msg);

/// Create action/NavigateToTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__NavigateToTarget_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_Feedback *
mission_interfaces__action__NavigateToTarget_Feedback__create(void);

/// Destroy action/NavigateToTarget message.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Feedback__destroy(mission_interfaces__action__NavigateToTarget_Feedback * msg);

/// Check for action/NavigateToTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Feedback__are_equal(const mission_interfaces__action__NavigateToTarget_Feedback * lhs, const mission_interfaces__action__NavigateToTarget_Feedback * rhs);

/// Copy a action/NavigateToTarget message.
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
mission_interfaces__action__NavigateToTarget_Feedback__copy(
  const mission_interfaces__action__NavigateToTarget_Feedback * input,
  mission_interfaces__action__NavigateToTarget_Feedback * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_Feedback__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_Feedback__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_Feedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_Feedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__NavigateToTarget_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Feedback__Sequence__init(mission_interfaces__action__NavigateToTarget_Feedback__Sequence * array, size_t size);

/// Finalize array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Feedback__Sequence__fini(mission_interfaces__action__NavigateToTarget_Feedback__Sequence * array);

/// Create array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__NavigateToTarget_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_Feedback__Sequence *
mission_interfaces__action__NavigateToTarget_Feedback__Sequence__create(size_t size);

/// Destroy array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_Feedback__Sequence__destroy(mission_interfaces__action__NavigateToTarget_Feedback__Sequence * array);

/// Check for action/NavigateToTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_Feedback__Sequence__are_equal(const mission_interfaces__action__NavigateToTarget_Feedback__Sequence * lhs, const mission_interfaces__action__NavigateToTarget_Feedback__Sequence * rhs);

/// Copy an array of action/NavigateToTarget messages.
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
mission_interfaces__action__NavigateToTarget_Feedback__Sequence__copy(
  const mission_interfaces__action__NavigateToTarget_Feedback__Sequence * input,
  mission_interfaces__action__NavigateToTarget_Feedback__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_SendGoal__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_SendGoal__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_SendGoal__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_SendGoal__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/NavigateToTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__NavigateToTarget_SendGoal_Request
 * )) before or use
 * mission_interfaces__action__NavigateToTarget_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Request__init(mission_interfaces__action__NavigateToTarget_SendGoal_Request * msg);

/// Finalize action/NavigateToTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Request__fini(mission_interfaces__action__NavigateToTarget_SendGoal_Request * msg);

/// Create action/NavigateToTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_SendGoal_Request *
mission_interfaces__action__NavigateToTarget_SendGoal_Request__create(void);

/// Destroy action/NavigateToTarget message.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Request__destroy(mission_interfaces__action__NavigateToTarget_SendGoal_Request * msg);

/// Check for action/NavigateToTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Request__are_equal(const mission_interfaces__action__NavigateToTarget_SendGoal_Request * lhs, const mission_interfaces__action__NavigateToTarget_SendGoal_Request * rhs);

/// Copy a action/NavigateToTarget message.
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
mission_interfaces__action__NavigateToTarget_SendGoal_Request__copy(
  const mission_interfaces__action__NavigateToTarget_SendGoal_Request * input,
  mission_interfaces__action__NavigateToTarget_SendGoal_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_SendGoal_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_SendGoal_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_SendGoal_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_SendGoal_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__init(mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__fini(mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence * array);

/// Create array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence *
mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__destroy(mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence * array);

/// Check for action/NavigateToTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__are_equal(const mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence * lhs, const mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/NavigateToTarget messages.
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
mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence__copy(
  const mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence * input,
  mission_interfaces__action__NavigateToTarget_SendGoal_Request__Sequence * output);

/// Initialize action/NavigateToTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__NavigateToTarget_SendGoal_Response
 * )) before or use
 * mission_interfaces__action__NavigateToTarget_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Response__init(mission_interfaces__action__NavigateToTarget_SendGoal_Response * msg);

/// Finalize action/NavigateToTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Response__fini(mission_interfaces__action__NavigateToTarget_SendGoal_Response * msg);

/// Create action/NavigateToTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_SendGoal_Response *
mission_interfaces__action__NavigateToTarget_SendGoal_Response__create(void);

/// Destroy action/NavigateToTarget message.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Response__destroy(mission_interfaces__action__NavigateToTarget_SendGoal_Response * msg);

/// Check for action/NavigateToTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Response__are_equal(const mission_interfaces__action__NavigateToTarget_SendGoal_Response * lhs, const mission_interfaces__action__NavigateToTarget_SendGoal_Response * rhs);

/// Copy a action/NavigateToTarget message.
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
mission_interfaces__action__NavigateToTarget_SendGoal_Response__copy(
  const mission_interfaces__action__NavigateToTarget_SendGoal_Response * input,
  mission_interfaces__action__NavigateToTarget_SendGoal_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_SendGoal_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_SendGoal_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_SendGoal_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_SendGoal_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__init(mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__fini(mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence * array);

/// Create array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence *
mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__destroy(mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence * array);

/// Check for action/NavigateToTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__are_equal(const mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence * lhs, const mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/NavigateToTarget messages.
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
mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence__copy(
  const mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence * input,
  mission_interfaces__action__NavigateToTarget_SendGoal_Response__Sequence * output);

/// Initialize action/NavigateToTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__NavigateToTarget_SendGoal_Event
 * )) before or use
 * mission_interfaces__action__NavigateToTarget_SendGoal_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Event__init(mission_interfaces__action__NavigateToTarget_SendGoal_Event * msg);

/// Finalize action/NavigateToTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Event__fini(mission_interfaces__action__NavigateToTarget_SendGoal_Event * msg);

/// Create action/NavigateToTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_SendGoal_Event *
mission_interfaces__action__NavigateToTarget_SendGoal_Event__create(void);

/// Destroy action/NavigateToTarget message.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Event__destroy(mission_interfaces__action__NavigateToTarget_SendGoal_Event * msg);

/// Check for action/NavigateToTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Event__are_equal(const mission_interfaces__action__NavigateToTarget_SendGoal_Event * lhs, const mission_interfaces__action__NavigateToTarget_SendGoal_Event * rhs);

/// Copy a action/NavigateToTarget message.
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
mission_interfaces__action__NavigateToTarget_SendGoal_Event__copy(
  const mission_interfaces__action__NavigateToTarget_SendGoal_Event * input,
  mission_interfaces__action__NavigateToTarget_SendGoal_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_SendGoal_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_SendGoal_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_SendGoal_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_SendGoal_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence__init(mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence * array, size_t size);

/// Finalize array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence__fini(mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence * array);

/// Create array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence *
mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence__create(size_t size);

/// Destroy array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence__destroy(mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence * array);

/// Check for action/NavigateToTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence__are_equal(const mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence * lhs, const mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence * rhs);

/// Copy an array of action/NavigateToTarget messages.
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
mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence__copy(
  const mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence * input,
  mission_interfaces__action__NavigateToTarget_SendGoal_Event__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_GetResult__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_GetResult__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_GetResult__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_GetResult__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/NavigateToTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__NavigateToTarget_GetResult_Request
 * )) before or use
 * mission_interfaces__action__NavigateToTarget_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Request__init(mission_interfaces__action__NavigateToTarget_GetResult_Request * msg);

/// Finalize action/NavigateToTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Request__fini(mission_interfaces__action__NavigateToTarget_GetResult_Request * msg);

/// Create action/NavigateToTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_GetResult_Request *
mission_interfaces__action__NavigateToTarget_GetResult_Request__create(void);

/// Destroy action/NavigateToTarget message.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Request__destroy(mission_interfaces__action__NavigateToTarget_GetResult_Request * msg);

/// Check for action/NavigateToTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Request__are_equal(const mission_interfaces__action__NavigateToTarget_GetResult_Request * lhs, const mission_interfaces__action__NavigateToTarget_GetResult_Request * rhs);

/// Copy a action/NavigateToTarget message.
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
mission_interfaces__action__NavigateToTarget_GetResult_Request__copy(
  const mission_interfaces__action__NavigateToTarget_GetResult_Request * input,
  mission_interfaces__action__NavigateToTarget_GetResult_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_GetResult_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_GetResult_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_GetResult_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_GetResult_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__init(mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__fini(mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence * array);

/// Create array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence *
mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__destroy(mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence * array);

/// Check for action/NavigateToTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__are_equal(const mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence * lhs, const mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence * rhs);

/// Copy an array of action/NavigateToTarget messages.
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
mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence__copy(
  const mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence * input,
  mission_interfaces__action__NavigateToTarget_GetResult_Request__Sequence * output);

/// Initialize action/NavigateToTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__NavigateToTarget_GetResult_Response
 * )) before or use
 * mission_interfaces__action__NavigateToTarget_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Response__init(mission_interfaces__action__NavigateToTarget_GetResult_Response * msg);

/// Finalize action/NavigateToTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Response__fini(mission_interfaces__action__NavigateToTarget_GetResult_Response * msg);

/// Create action/NavigateToTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_GetResult_Response *
mission_interfaces__action__NavigateToTarget_GetResult_Response__create(void);

/// Destroy action/NavigateToTarget message.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Response__destroy(mission_interfaces__action__NavigateToTarget_GetResult_Response * msg);

/// Check for action/NavigateToTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Response__are_equal(const mission_interfaces__action__NavigateToTarget_GetResult_Response * lhs, const mission_interfaces__action__NavigateToTarget_GetResult_Response * rhs);

/// Copy a action/NavigateToTarget message.
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
mission_interfaces__action__NavigateToTarget_GetResult_Response__copy(
  const mission_interfaces__action__NavigateToTarget_GetResult_Response * input,
  mission_interfaces__action__NavigateToTarget_GetResult_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_GetResult_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_GetResult_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_GetResult_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_GetResult_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__init(mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__fini(mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence * array);

/// Create array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence *
mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__destroy(mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence * array);

/// Check for action/NavigateToTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__are_equal(const mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence * lhs, const mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence * rhs);

/// Copy an array of action/NavigateToTarget messages.
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
mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence__copy(
  const mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence * input,
  mission_interfaces__action__NavigateToTarget_GetResult_Response__Sequence * output);

/// Initialize action/NavigateToTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__NavigateToTarget_GetResult_Event
 * )) before or use
 * mission_interfaces__action__NavigateToTarget_GetResult_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Event__init(mission_interfaces__action__NavigateToTarget_GetResult_Event * msg);

/// Finalize action/NavigateToTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Event__fini(mission_interfaces__action__NavigateToTarget_GetResult_Event * msg);

/// Create action/NavigateToTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_GetResult_Event *
mission_interfaces__action__NavigateToTarget_GetResult_Event__create(void);

/// Destroy action/NavigateToTarget message.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Event__destroy(mission_interfaces__action__NavigateToTarget_GetResult_Event * msg);

/// Check for action/NavigateToTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Event__are_equal(const mission_interfaces__action__NavigateToTarget_GetResult_Event * lhs, const mission_interfaces__action__NavigateToTarget_GetResult_Event * rhs);

/// Copy a action/NavigateToTarget message.
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
mission_interfaces__action__NavigateToTarget_GetResult_Event__copy(
  const mission_interfaces__action__NavigateToTarget_GetResult_Event * input,
  mission_interfaces__action__NavigateToTarget_GetResult_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_GetResult_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_GetResult_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_GetResult_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_GetResult_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence__init(mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence * array, size_t size);

/// Finalize array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence__fini(mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence * array);

/// Create array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence *
mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence__create(size_t size);

/// Destroy array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence__destroy(mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence * array);

/// Check for action/NavigateToTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence__are_equal(const mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence * lhs, const mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence * rhs);

/// Copy an array of action/NavigateToTarget messages.
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
mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence__copy(
  const mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence * input,
  mission_interfaces__action__NavigateToTarget_GetResult_Event__Sequence * output);

/// Initialize action/NavigateToTarget message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mission_interfaces__action__NavigateToTarget_FeedbackMessage
 * )) before or use
 * mission_interfaces__action__NavigateToTarget_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_FeedbackMessage__init(mission_interfaces__action__NavigateToTarget_FeedbackMessage * msg);

/// Finalize action/NavigateToTarget message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_FeedbackMessage__fini(mission_interfaces__action__NavigateToTarget_FeedbackMessage * msg);

/// Create action/NavigateToTarget message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mission_interfaces__action__NavigateToTarget_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_FeedbackMessage *
mission_interfaces__action__NavigateToTarget_FeedbackMessage__create(void);

/// Destroy action/NavigateToTarget message.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_FeedbackMessage__destroy(mission_interfaces__action__NavigateToTarget_FeedbackMessage * msg);

/// Check for action/NavigateToTarget message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_FeedbackMessage__are_equal(const mission_interfaces__action__NavigateToTarget_FeedbackMessage * lhs, const mission_interfaces__action__NavigateToTarget_FeedbackMessage * rhs);

/// Copy a action/NavigateToTarget message.
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
mission_interfaces__action__NavigateToTarget_FeedbackMessage__copy(
  const mission_interfaces__action__NavigateToTarget_FeedbackMessage * input,
  mission_interfaces__action__NavigateToTarget_FeedbackMessage * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_type_hash_t *
mission_interfaces__action__NavigateToTarget_FeedbackMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
mission_interfaces__action__NavigateToTarget_FeedbackMessage__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource *
mission_interfaces__action__NavigateToTarget_FeedbackMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
mission_interfaces__action__NavigateToTarget_FeedbackMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the number of elements and calls
 * mission_interfaces__action__NavigateToTarget_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__init(mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__fini(mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence * array);

/// Create array of action/NavigateToTarget messages.
/**
 * It allocates the memory for the array and calls
 * mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence *
mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/NavigateToTarget messages.
/**
 * It calls
 * mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
void
mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__destroy(mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence * array);

/// Check for action/NavigateToTarget message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mission_interfaces
bool
mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__are_equal(const mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence * lhs, const mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/NavigateToTarget messages.
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
mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence__copy(
  const mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence * input,
  mission_interfaces__action__NavigateToTarget_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MISSION_INTERFACES__ACTION__DETAIL__NAVIGATE_TO_TARGET__FUNCTIONS_H_
