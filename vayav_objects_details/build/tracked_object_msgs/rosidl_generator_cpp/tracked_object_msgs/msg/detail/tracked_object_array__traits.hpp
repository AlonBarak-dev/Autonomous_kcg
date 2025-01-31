// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tracked_object_msgs:msg/TrackedObjectArray.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__TRAITS_HPP_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__TRAITS_HPP_

#include "tracked_object_msgs/msg/detail/tracked_object_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tracked_object_msgs::msg::TrackedObjectArray>()
{
  return "tracked_object_msgs::msg::TrackedObjectArray";
}

template<>
inline const char * name<tracked_object_msgs::msg::TrackedObjectArray>()
{
  return "tracked_object_msgs/msg/TrackedObjectArray";
}

template<>
struct has_fixed_size<tracked_object_msgs::msg::TrackedObjectArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tracked_object_msgs::msg::TrackedObjectArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tracked_object_msgs::msg::TrackedObjectArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__TRAITS_HPP_
