// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__FUNCTIONS_H_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_auto_system_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__struct.h"

/// Initialize msg/Float32MultiArrayDiagnostic message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic
 * )) before or use
 * autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_system_msgs
bool
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__init(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * msg);

/// Finalize msg/Float32MultiArrayDiagnostic message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_system_msgs
void
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__fini(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * msg);

/// Create msg/Float32MultiArrayDiagnostic message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_system_msgs
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic *
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__create();

/// Destroy msg/Float32MultiArrayDiagnostic message.
/**
 * It calls
 * autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_system_msgs
void
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__destroy(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * msg);


/// Initialize array of msg/Float32MultiArrayDiagnostic messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_system_msgs
bool
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__init(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence * array, size_t size);

/// Finalize array of msg/Float32MultiArrayDiagnostic messages.
/**
 * It calls
 * autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_system_msgs
void
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__fini(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence * array);

/// Create array of msg/Float32MultiArrayDiagnostic messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_system_msgs
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence *
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__create(size_t size);

/// Destroy array of msg/Float32MultiArrayDiagnostic messages.
/**
 * It calls
 * autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_system_msgs
void
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__destroy(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__FUNCTIONS_H_
