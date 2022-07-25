// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_vehicle_msgs:msg/WipersReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_vehicle_msgs/msg/detail/wipers_report__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_vehicle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_vehicle_msgs/msg/detail/wipers_report__functions.h"
#include "autoware_auto_vehicle_msgs/msg/detail/wipers_report__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WipersReport__rosidl_typesupport_introspection_c__WipersReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_vehicle_msgs__msg__WipersReport__init(message_memory);
}

void WipersReport__rosidl_typesupport_introspection_c__WipersReport_fini_function(void * message_memory)
{
  autoware_auto_vehicle_msgs__msg__WipersReport__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WipersReport__rosidl_typesupport_introspection_c__WipersReport_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_vehicle_msgs__msg__WipersReport, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "report",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_vehicle_msgs__msg__WipersReport, report),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WipersReport__rosidl_typesupport_introspection_c__WipersReport_message_members = {
  "autoware_auto_vehicle_msgs__msg",  // message namespace
  "WipersReport",  // message name
  2,  // number of fields
  sizeof(autoware_auto_vehicle_msgs__msg__WipersReport),
  WipersReport__rosidl_typesupport_introspection_c__WipersReport_message_member_array,  // message members
  WipersReport__rosidl_typesupport_introspection_c__WipersReport_init_function,  // function to initialize message memory (memory has to be allocated)
  WipersReport__rosidl_typesupport_introspection_c__WipersReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WipersReport__rosidl_typesupport_introspection_c__WipersReport_message_type_support_handle = {
  0,
  &WipersReport__rosidl_typesupport_introspection_c__WipersReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_vehicle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_vehicle_msgs, msg, WipersReport)() {
  WipersReport__rosidl_typesupport_introspection_c__WipersReport_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!WipersReport__rosidl_typesupport_introspection_c__WipersReport_message_type_support_handle.typesupport_identifier) {
    WipersReport__rosidl_typesupport_introspection_c__WipersReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WipersReport__rosidl_typesupport_introspection_c__WipersReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
