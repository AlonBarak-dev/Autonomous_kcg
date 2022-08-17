// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_auto_vehicle_msgs:msg/VehicleKinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__FUNCTIONS_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_auto_vehicle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_auto_vehicle_msgs/msg/detail/vehicle_kinematic_state__struct.h"

/// Initialize msg/VehicleKinematicState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_vehicle_msgs__msg__VehicleKinematicState
 * )) before or use
 * autoware_auto_vehicle_msgs__msg__VehicleKinematicState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
bool
autoware_auto_vehicle_msgs__msg__VehicleKinematicState__init(autoware_auto_vehicle_msgs__msg__VehicleKinematicState * msg);

/// Finalize msg/VehicleKinematicState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
void
autoware_auto_vehicle_msgs__msg__VehicleKinematicState__fini(autoware_auto_vehicle_msgs__msg__VehicleKinematicState * msg);

/// Create msg/VehicleKinematicState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_vehicle_msgs__msg__VehicleKinematicState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
autoware_auto_vehicle_msgs__msg__VehicleKinematicState *
autoware_auto_vehicle_msgs__msg__VehicleKinematicState__create();

/// Destroy msg/VehicleKinematicState message.
/**
 * It calls
 * autoware_auto_vehicle_msgs__msg__VehicleKinematicState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
void
autoware_auto_vehicle_msgs__msg__VehicleKinematicState__destroy(autoware_auto_vehicle_msgs__msg__VehicleKinematicState * msg);


/// Initialize array of msg/VehicleKinematicState messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_vehicle_msgs__msg__VehicleKinematicState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
bool
autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence__init(autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence * array, size_t size);

/// Finalize array of msg/VehicleKinematicState messages.
/**
 * It calls
 * autoware_auto_vehicle_msgs__msg__VehicleKinematicState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
void
autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence__fini(autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence * array);

/// Create array of msg/VehicleKinematicState messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence *
autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence__create(size_t size);

/// Destroy array of msg/VehicleKinematicState messages.
/**
 * It calls
 * autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
void
autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence__destroy(autoware_auto_vehicle_msgs__msg__VehicleKinematicState__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_KINEMATIC_STATE__FUNCTIONS_H_
