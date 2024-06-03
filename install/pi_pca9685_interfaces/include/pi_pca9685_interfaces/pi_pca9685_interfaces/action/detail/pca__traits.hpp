// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pi_pca9685_interfaces:action/PCA.idl
// generated code does not contain a copyright notice

#ifndef PI_PCA9685_INTERFACES__ACTION__DETAIL__PCA__TRAITS_HPP_
#define PI_PCA9685_INTERFACES__ACTION__DETAIL__PCA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pi_pca9685_interfaces/action/detail/pca__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pi_pca9685_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PCA_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: pca
  {
    out << "pca: ";
    rosidl_generator_traits::value_to_yaml(msg.pca, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCA_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pca
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pca: ";
    rosidl_generator_traits::value_to_yaml(msg.pca, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCA_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pi_pca9685_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pi_pca9685_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi_pca9685_interfaces::action::PCA_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi_pca9685_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi_pca9685_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pi_pca9685_interfaces::action::PCA_Goal & msg)
{
  return pi_pca9685_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pi_pca9685_interfaces::action::PCA_Goal>()
{
  return "pi_pca9685_interfaces::action::PCA_Goal";
}

template<>
inline const char * name<pi_pca9685_interfaces::action::PCA_Goal>()
{
  return "pi_pca9685_interfaces/action/PCA_Goal";
}

template<>
struct has_fixed_size<pi_pca9685_interfaces::action::PCA_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pi_pca9685_interfaces::action::PCA_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pi_pca9685_interfaces::action::PCA_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pi_pca9685_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PCA_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCA_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCA_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pi_pca9685_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pi_pca9685_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi_pca9685_interfaces::action::PCA_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi_pca9685_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi_pca9685_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pi_pca9685_interfaces::action::PCA_Result & msg)
{
  return pi_pca9685_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pi_pca9685_interfaces::action::PCA_Result>()
{
  return "pi_pca9685_interfaces::action::PCA_Result";
}

template<>
inline const char * name<pi_pca9685_interfaces::action::PCA_Result>()
{
  return "pi_pca9685_interfaces/action/PCA_Result";
}

template<>
struct has_fixed_size<pi_pca9685_interfaces::action::PCA_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pi_pca9685_interfaces::action::PCA_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pi_pca9685_interfaces::action::PCA_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pi_pca9685_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PCA_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: feedback
  {
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCA_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCA_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pi_pca9685_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pi_pca9685_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi_pca9685_interfaces::action::PCA_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi_pca9685_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi_pca9685_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pi_pca9685_interfaces::action::PCA_Feedback & msg)
{
  return pi_pca9685_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pi_pca9685_interfaces::action::PCA_Feedback>()
{
  return "pi_pca9685_interfaces::action::PCA_Feedback";
}

template<>
inline const char * name<pi_pca9685_interfaces::action::PCA_Feedback>()
{
  return "pi_pca9685_interfaces/action/PCA_Feedback";
}

template<>
struct has_fixed_size<pi_pca9685_interfaces::action::PCA_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pi_pca9685_interfaces::action::PCA_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pi_pca9685_interfaces::action::PCA_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "pi_pca9685_interfaces/action/detail/pca__traits.hpp"

namespace pi_pca9685_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PCA_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCA_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCA_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pi_pca9685_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pi_pca9685_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi_pca9685_interfaces::action::PCA_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi_pca9685_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi_pca9685_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pi_pca9685_interfaces::action::PCA_SendGoal_Request & msg)
{
  return pi_pca9685_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pi_pca9685_interfaces::action::PCA_SendGoal_Request>()
{
  return "pi_pca9685_interfaces::action::PCA_SendGoal_Request";
}

template<>
inline const char * name<pi_pca9685_interfaces::action::PCA_SendGoal_Request>()
{
  return "pi_pca9685_interfaces/action/PCA_SendGoal_Request";
}

template<>
struct has_fixed_size<pi_pca9685_interfaces::action::PCA_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<pi_pca9685_interfaces::action::PCA_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pi_pca9685_interfaces::action::PCA_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<pi_pca9685_interfaces::action::PCA_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pi_pca9685_interfaces::action::PCA_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace pi_pca9685_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PCA_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCA_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCA_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pi_pca9685_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pi_pca9685_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi_pca9685_interfaces::action::PCA_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi_pca9685_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi_pca9685_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pi_pca9685_interfaces::action::PCA_SendGoal_Response & msg)
{
  return pi_pca9685_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pi_pca9685_interfaces::action::PCA_SendGoal_Response>()
{
  return "pi_pca9685_interfaces::action::PCA_SendGoal_Response";
}

template<>
inline const char * name<pi_pca9685_interfaces::action::PCA_SendGoal_Response>()
{
  return "pi_pca9685_interfaces/action/PCA_SendGoal_Response";
}

template<>
struct has_fixed_size<pi_pca9685_interfaces::action::PCA_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<pi_pca9685_interfaces::action::PCA_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<pi_pca9685_interfaces::action::PCA_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_pca9685_interfaces::action::PCA_SendGoal>()
{
  return "pi_pca9685_interfaces::action::PCA_SendGoal";
}

template<>
inline const char * name<pi_pca9685_interfaces::action::PCA_SendGoal>()
{
  return "pi_pca9685_interfaces/action/PCA_SendGoal";
}

template<>
struct has_fixed_size<pi_pca9685_interfaces::action::PCA_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<pi_pca9685_interfaces::action::PCA_SendGoal_Request>::value &&
    has_fixed_size<pi_pca9685_interfaces::action::PCA_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<pi_pca9685_interfaces::action::PCA_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<pi_pca9685_interfaces::action::PCA_SendGoal_Request>::value &&
    has_bounded_size<pi_pca9685_interfaces::action::PCA_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<pi_pca9685_interfaces::action::PCA_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<pi_pca9685_interfaces::action::PCA_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pi_pca9685_interfaces::action::PCA_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace pi_pca9685_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PCA_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCA_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCA_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pi_pca9685_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pi_pca9685_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi_pca9685_interfaces::action::PCA_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi_pca9685_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi_pca9685_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pi_pca9685_interfaces::action::PCA_GetResult_Request & msg)
{
  return pi_pca9685_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pi_pca9685_interfaces::action::PCA_GetResult_Request>()
{
  return "pi_pca9685_interfaces::action::PCA_GetResult_Request";
}

template<>
inline const char * name<pi_pca9685_interfaces::action::PCA_GetResult_Request>()
{
  return "pi_pca9685_interfaces/action/PCA_GetResult_Request";
}

template<>
struct has_fixed_size<pi_pca9685_interfaces::action::PCA_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pi_pca9685_interfaces::action::PCA_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pi_pca9685_interfaces::action::PCA_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__traits.hpp"

namespace pi_pca9685_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PCA_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCA_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCA_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pi_pca9685_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pi_pca9685_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi_pca9685_interfaces::action::PCA_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi_pca9685_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi_pca9685_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pi_pca9685_interfaces::action::PCA_GetResult_Response & msg)
{
  return pi_pca9685_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pi_pca9685_interfaces::action::PCA_GetResult_Response>()
{
  return "pi_pca9685_interfaces::action::PCA_GetResult_Response";
}

template<>
inline const char * name<pi_pca9685_interfaces::action::PCA_GetResult_Response>()
{
  return "pi_pca9685_interfaces/action/PCA_GetResult_Response";
}

template<>
struct has_fixed_size<pi_pca9685_interfaces::action::PCA_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<pi_pca9685_interfaces::action::PCA_Result>::value> {};

template<>
struct has_bounded_size<pi_pca9685_interfaces::action::PCA_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<pi_pca9685_interfaces::action::PCA_Result>::value> {};

template<>
struct is_message<pi_pca9685_interfaces::action::PCA_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pi_pca9685_interfaces::action::PCA_GetResult>()
{
  return "pi_pca9685_interfaces::action::PCA_GetResult";
}

template<>
inline const char * name<pi_pca9685_interfaces::action::PCA_GetResult>()
{
  return "pi_pca9685_interfaces/action/PCA_GetResult";
}

template<>
struct has_fixed_size<pi_pca9685_interfaces::action::PCA_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<pi_pca9685_interfaces::action::PCA_GetResult_Request>::value &&
    has_fixed_size<pi_pca9685_interfaces::action::PCA_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<pi_pca9685_interfaces::action::PCA_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<pi_pca9685_interfaces::action::PCA_GetResult_Request>::value &&
    has_bounded_size<pi_pca9685_interfaces::action::PCA_GetResult_Response>::value
  >
{
};

template<>
struct is_service<pi_pca9685_interfaces::action::PCA_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<pi_pca9685_interfaces::action::PCA_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pi_pca9685_interfaces::action::PCA_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__traits.hpp"

namespace pi_pca9685_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const PCA_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PCA_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PCA_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace pi_pca9685_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use pi_pca9685_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pi_pca9685_interfaces::action::PCA_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  pi_pca9685_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pi_pca9685_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const pi_pca9685_interfaces::action::PCA_FeedbackMessage & msg)
{
  return pi_pca9685_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<pi_pca9685_interfaces::action::PCA_FeedbackMessage>()
{
  return "pi_pca9685_interfaces::action::PCA_FeedbackMessage";
}

template<>
inline const char * name<pi_pca9685_interfaces::action::PCA_FeedbackMessage>()
{
  return "pi_pca9685_interfaces/action/PCA_FeedbackMessage";
}

template<>
struct has_fixed_size<pi_pca9685_interfaces::action::PCA_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<pi_pca9685_interfaces::action::PCA_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<pi_pca9685_interfaces::action::PCA_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<pi_pca9685_interfaces::action::PCA_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<pi_pca9685_interfaces::action::PCA_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<pi_pca9685_interfaces::action::PCA>
  : std::true_type
{
};

template<>
struct is_action_goal<pi_pca9685_interfaces::action::PCA_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<pi_pca9685_interfaces::action::PCA_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<pi_pca9685_interfaces::action::PCA_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PI_PCA9685_INTERFACES__ACTION__DETAIL__PCA__TRAITS_HPP_
