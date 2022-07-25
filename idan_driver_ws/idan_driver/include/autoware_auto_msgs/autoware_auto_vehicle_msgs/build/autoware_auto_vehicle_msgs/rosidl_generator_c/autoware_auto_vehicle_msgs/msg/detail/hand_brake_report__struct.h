// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/HandBrakeReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_REPORT__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/HandBrakeReport in the package autoware_auto_vehicle_msgs.
typedef struct autoware_auto_vehicle_msgs__msg__HandBrakeReport
{
  builtin_interfaces__msg__Time stamp;
  bool report;
} autoware_auto_vehicle_msgs__msg__HandBrakeReport;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__HandBrakeReport.
typedef struct autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence
{
  autoware_auto_vehicle_msgs__msg__HandBrakeReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_REPORT__STRUCT_H_
