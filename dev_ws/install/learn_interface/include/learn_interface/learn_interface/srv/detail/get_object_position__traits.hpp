// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from learn_interface:srv/GetObjectPosition.idl
// generated code does not contain a copyright notice

#ifndef LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__TRAITS_HPP_
#define LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "learn_interface/srv/detail/get_object_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace learn_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObjectPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: get
  {
    out << "get: ";
    rosidl_generator_traits::value_to_yaml(msg.get, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObjectPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: get
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "get: ";
    rosidl_generator_traits::value_to_yaml(msg.get, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObjectPosition_Request & msg, bool use_flow_style = false)
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
  const learn_interface::srv::GetObjectPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  learn_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learn_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learn_interface::srv::GetObjectPosition_Request & msg)
{
  return learn_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learn_interface::srv::GetObjectPosition_Request>()
{
  return "learn_interface::srv::GetObjectPosition_Request";
}

template<>
inline const char * name<learn_interface::srv::GetObjectPosition_Request>()
{
  return "learn_interface/srv/GetObjectPosition_Request";
}

template<>
struct has_fixed_size<learn_interface::srv::GetObjectPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::srv::GetObjectPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::srv::GetObjectPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace learn_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObjectPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetObjectPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetObjectPosition_Response & msg, bool use_flow_style = false)
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
  const learn_interface::srv::GetObjectPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  learn_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use learn_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const learn_interface::srv::GetObjectPosition_Response & msg)
{
  return learn_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<learn_interface::srv::GetObjectPosition_Response>()
{
  return "learn_interface::srv::GetObjectPosition_Response";
}

template<>
inline const char * name<learn_interface::srv::GetObjectPosition_Response>()
{
  return "learn_interface/srv/GetObjectPosition_Response";
}

template<>
struct has_fixed_size<learn_interface::srv::GetObjectPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<learn_interface::srv::GetObjectPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<learn_interface::srv::GetObjectPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<learn_interface::srv::GetObjectPosition>()
{
  return "learn_interface::srv::GetObjectPosition";
}

template<>
inline const char * name<learn_interface::srv::GetObjectPosition>()
{
  return "learn_interface/srv/GetObjectPosition";
}

template<>
struct has_fixed_size<learn_interface::srv::GetObjectPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<learn_interface::srv::GetObjectPosition_Request>::value &&
    has_fixed_size<learn_interface::srv::GetObjectPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<learn_interface::srv::GetObjectPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<learn_interface::srv::GetObjectPosition_Request>::value &&
    has_bounded_size<learn_interface::srv::GetObjectPosition_Response>::value
  >
{
};

template<>
struct is_service<learn_interface::srv::GetObjectPosition>
  : std::true_type
{
};

template<>
struct is_service_request<learn_interface::srv::GetObjectPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<learn_interface::srv::GetObjectPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEARN_INTERFACE__SRV__DETAIL__GET_OBJECT_POSITION__TRAITS_HPP_
