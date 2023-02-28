// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learn_interface:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_
#define LEARN_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "learn_interface/srv/detail/add_two_ints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace learn_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTwoInts_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTwoInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTwoInts_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace learn_interface

namespace rosidl_generator_traits
{

[[deprecated("use learn_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const learn_interface::srv::AddTwoInts_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  learn_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learn_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learn_interface::srv::AddTwoInts_Request & msg)
{
  return learn_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learn_interface::srv::AddTwoInts_Request>()
{
  return "learn_interface::srv::AddTwoInts_Request";
}

template<>
inline const char * name<learn_interface::srv::AddTwoInts_Request>()
{
  return "learn_interface/srv/AddTwoInts_Request";
}

template<>
struct has_fixed_size<learn_interface::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::srv::AddTwoInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace learn_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddTwoInts_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddTwoInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddTwoInts_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace learn_interface

namespace rosidl_generator_traits
{

[[deprecated("use learn_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const learn_interface::srv::AddTwoInts_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  learn_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learn_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learn_interface::srv::AddTwoInts_Response & msg)
{
  return learn_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learn_interface::srv::AddTwoInts_Response>()
{
  return "learn_interface::srv::AddTwoInts_Response";
}

template<>
inline const char * name<learn_interface::srv::AddTwoInts_Response>()
{
  return "learn_interface/srv/AddTwoInts_Response";
}

template<>
struct has_fixed_size<learn_interface::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::srv::AddTwoInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::AddTwoInts>()
{
  return "learn_interface::srv::AddTwoInts";
}

template<>
inline const char * name<learn_interface::srv::AddTwoInts>()
{
  return "learn_interface/srv/AddTwoInts";
}

template<>
struct has_fixed_size<learn_interface::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_fixed_size<learn_interface::srv::AddTwoInts_Request>::value &&
    has_fixed_size<learn_interface::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<learn_interface::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_bounded_size<learn_interface::srv::AddTwoInts_Request>::value &&
    has_bounded_size<learn_interface::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct is_service<learn_interface::srv::AddTwoInts>
  : std::true_type
{
};

template<>
struct is_service_request<learn_interface::srv::AddTwoInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<learn_interface::srv::AddTwoInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEARN_INTERFACE__SRV__DETAIL__ADD_TWO_INTS__TRAITS_HPP_
