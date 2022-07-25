// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_mapping_msgs:msg/MapPrimitive.idl
// generated code does not contain a copyright notice
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__struct.hpp"

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

namespace autoware_auto_mapping_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_mapping_msgs
cdr_serialize(
  const autoware_auto_mapping_msgs::msg::MapPrimitive & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: primitive_type
  cdr << ros_message.primitive_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_mapping_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_auto_mapping_msgs::msg::MapPrimitive & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: primitive_type
  cdr >> ros_message.primitive_type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_mapping_msgs
get_serialized_size(
  const autoware_auto_mapping_msgs::msg::MapPrimitive & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: primitive_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.primitive_type.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_mapping_msgs
max_serialized_size_MapPrimitive(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: primitive_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _MapPrimitive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_auto_mapping_msgs::msg::MapPrimitive *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MapPrimitive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_auto_mapping_msgs::msg::MapPrimitive *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MapPrimitive__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_auto_mapping_msgs::msg::MapPrimitive *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MapPrimitive__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MapPrimitive(full_bounded, 0);
}

static message_type_support_callbacks_t _MapPrimitive__callbacks = {
  "autoware_auto_mapping_msgs::msg",
  "MapPrimitive",
  _MapPrimitive__cdr_serialize,
  _MapPrimitive__cdr_deserialize,
  _MapPrimitive__get_serialized_size,
  _MapPrimitive__max_serialized_size
};

static rosidl_message_type_support_t _MapPrimitive__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MapPrimitive__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_auto_mapping_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_auto_mapping_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_mapping_msgs::msg::MapPrimitive>()
{
  return &autoware_auto_mapping_msgs::msg::typesupport_fastrtps_cpp::_MapPrimitive__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_auto_mapping_msgs, msg, MapPrimitive)() {
  return &autoware_auto_mapping_msgs::msg::typesupport_fastrtps_cpp::_MapPrimitive__handle;
}

#ifdef __cplusplus
}
#endif
