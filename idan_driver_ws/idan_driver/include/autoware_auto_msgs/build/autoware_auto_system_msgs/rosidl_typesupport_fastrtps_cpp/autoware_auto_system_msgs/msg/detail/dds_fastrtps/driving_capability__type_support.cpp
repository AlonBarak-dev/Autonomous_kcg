// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_system_msgs:msg/DrivingCapability.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/driving_capability__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_auto_system_msgs/msg/detail/driving_capability__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace autoware_auto_system_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_auto_system_msgs::msg::HazardStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_auto_system_msgs::msg::HazardStatus &);
size_t get_serialized_size(
  const autoware_auto_system_msgs::msg::HazardStatus &,
  size_t current_alignment);
size_t
max_serialized_size_HazardStatus(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_auto_system_msgs

namespace autoware_auto_system_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_auto_system_msgs::msg::HazardStatus &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_auto_system_msgs::msg::HazardStatus &);
size_t get_serialized_size(
  const autoware_auto_system_msgs::msg::HazardStatus &,
  size_t current_alignment);
size_t
max_serialized_size_HazardStatus(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_auto_system_msgs


namespace autoware_auto_system_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_system_msgs
cdr_serialize(
  const autoware_auto_system_msgs::msg::DrivingCapability & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: autonomous_driving
  autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.autonomous_driving,
    cdr);
  // Member: remote_control
  autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.remote_control,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_system_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_auto_system_msgs::msg::DrivingCapability & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: autonomous_driving
  autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.autonomous_driving);

  // Member: remote_control
  autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.remote_control);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_system_msgs
get_serialized_size(
  const autoware_auto_system_msgs::msg::DrivingCapability & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: autonomous_driving

  current_alignment +=
    autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.autonomous_driving, current_alignment);
  // Member: remote_control

  current_alignment +=
    autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.remote_control, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_system_msgs
max_serialized_size_DrivingCapability(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: autonomous_driving
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HazardStatus(
        full_bounded, current_alignment);
    }
  }

  // Member: remote_control
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_HazardStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _DrivingCapability__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_auto_system_msgs::msg::DrivingCapability *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DrivingCapability__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_auto_system_msgs::msg::DrivingCapability *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DrivingCapability__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_auto_system_msgs::msg::DrivingCapability *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DrivingCapability__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DrivingCapability(full_bounded, 0);
}

static message_type_support_callbacks_t _DrivingCapability__callbacks = {
  "autoware_auto_system_msgs::msg",
  "DrivingCapability",
  _DrivingCapability__cdr_serialize,
  _DrivingCapability__cdr_deserialize,
  _DrivingCapability__get_serialized_size,
  _DrivingCapability__max_serialized_size
};

static rosidl_message_type_support_t _DrivingCapability__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DrivingCapability__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_auto_system_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_auto_system_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_system_msgs::msg::DrivingCapability>()
{
  return &autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::_DrivingCapability__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_auto_system_msgs, msg, DrivingCapability)() {
  return &autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::_DrivingCapability__handle;
}

#ifdef __cplusplus
}
#endif
