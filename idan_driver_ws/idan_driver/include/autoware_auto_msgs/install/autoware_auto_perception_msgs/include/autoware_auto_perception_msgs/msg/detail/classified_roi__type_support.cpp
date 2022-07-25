// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoi.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autoware_auto_perception_msgs/msg/detail/classified_roi__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ClassifiedRoi_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autoware_auto_perception_msgs::msg::ClassifiedRoi(_init);
}

void ClassifiedRoi_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autoware_auto_perception_msgs::msg::ClassifiedRoi *>(message_memory);
  typed_message->~ClassifiedRoi();
}

size_t size_function__ClassifiedRoi__classifications(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autoware_auto_perception_msgs::msg::ObjectClassification> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ClassifiedRoi__classifications(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autoware_auto_perception_msgs::msg::ObjectClassification> *>(untyped_member);
  return &member[index];
}

void * get_function__ClassifiedRoi__classifications(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autoware_auto_perception_msgs::msg::ObjectClassification> *>(untyped_member);
  return &member[index];
}

void resize_function__ClassifiedRoi__classifications(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autoware_auto_perception_msgs::msg::ObjectClassification> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ClassifiedRoi_message_member_array[2] = {
  {
    "classifications",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autoware_auto_perception_msgs::msg::ObjectClassification>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::ClassifiedRoi, classifications),  // bytes offset in struct
    nullptr,  // default value
    size_function__ClassifiedRoi__classifications,  // size() function pointer
    get_const_function__ClassifiedRoi__classifications,  // get_const(index) function pointer
    get_function__ClassifiedRoi__classifications,  // get(index) function pointer
    resize_function__ClassifiedRoi__classifications  // resize(index) function pointer
  },
  {
    "polygon",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Polygon>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_perception_msgs::msg::ClassifiedRoi, polygon),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ClassifiedRoi_message_members = {
  "autoware_auto_perception_msgs::msg",  // message namespace
  "ClassifiedRoi",  // message name
  2,  // number of fields
  sizeof(autoware_auto_perception_msgs::msg::ClassifiedRoi),
  ClassifiedRoi_message_member_array,  // message members
  ClassifiedRoi_init_function,  // function to initialize message memory (memory has to be allocated)
  ClassifiedRoi_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ClassifiedRoi_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ClassifiedRoi_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autoware_auto_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_perception_msgs::msg::ClassifiedRoi>()
{
  return &::autoware_auto_perception_msgs::msg::rosidl_typesupport_introspection_cpp::ClassifiedRoi_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autoware_auto_perception_msgs, msg, ClassifiedRoi)() {
  return &::autoware_auto_perception_msgs::msg::rosidl_typesupport_introspection_cpp::ClassifiedRoi_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
