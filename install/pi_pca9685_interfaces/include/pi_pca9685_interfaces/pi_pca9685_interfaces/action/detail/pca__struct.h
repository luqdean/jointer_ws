// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pi_pca9685_interfaces:action/PCA.idl
// generated code does not contain a copyright notice

#ifndef PI_PCA9685_INTERFACES__ACTION__DETAIL__PCA__STRUCT_H_
#define PI_PCA9685_INTERFACES__ACTION__DETAIL__PCA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pca'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PCA in the package pi_pca9685_interfaces.
typedef struct pi_pca9685_interfaces__action__PCA_Goal
{
  rosidl_runtime_c__String pca;
} pi_pca9685_interfaces__action__PCA_Goal;

// Struct for a sequence of pi_pca9685_interfaces__action__PCA_Goal.
typedef struct pi_pca9685_interfaces__action__PCA_Goal__Sequence
{
  pi_pca9685_interfaces__action__PCA_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_pca9685_interfaces__action__PCA_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/PCA in the package pi_pca9685_interfaces.
typedef struct pi_pca9685_interfaces__action__PCA_Result
{
  int32_t value;
} pi_pca9685_interfaces__action__PCA_Result;

// Struct for a sequence of pi_pca9685_interfaces__action__PCA_Result.
typedef struct pi_pca9685_interfaces__action__PCA_Result__Sequence
{
  pi_pca9685_interfaces__action__PCA_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_pca9685_interfaces__action__PCA_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/PCA in the package pi_pca9685_interfaces.
typedef struct pi_pca9685_interfaces__action__PCA_Feedback
{
  int32_t feedback;
} pi_pca9685_interfaces__action__PCA_Feedback;

// Struct for a sequence of pi_pca9685_interfaces__action__PCA_Feedback.
typedef struct pi_pca9685_interfaces__action__PCA_Feedback__Sequence
{
  pi_pca9685_interfaces__action__PCA_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_pca9685_interfaces__action__PCA_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pi_pca9685_interfaces/action/detail/pca__struct.h"

/// Struct defined in action/PCA in the package pi_pca9685_interfaces.
typedef struct pi_pca9685_interfaces__action__PCA_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pi_pca9685_interfaces__action__PCA_Goal goal;
} pi_pca9685_interfaces__action__PCA_SendGoal_Request;

// Struct for a sequence of pi_pca9685_interfaces__action__PCA_SendGoal_Request.
typedef struct pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence
{
  pi_pca9685_interfaces__action__PCA_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PCA in the package pi_pca9685_interfaces.
typedef struct pi_pca9685_interfaces__action__PCA_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pi_pca9685_interfaces__action__PCA_SendGoal_Response;

// Struct for a sequence of pi_pca9685_interfaces__action__PCA_SendGoal_Response.
typedef struct pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence
{
  pi_pca9685_interfaces__action__PCA_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PCA in the package pi_pca9685_interfaces.
typedef struct pi_pca9685_interfaces__action__PCA_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pi_pca9685_interfaces__action__PCA_GetResult_Request;

// Struct for a sequence of pi_pca9685_interfaces__action__PCA_GetResult_Request.
typedef struct pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence
{
  pi_pca9685_interfaces__action__PCA_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__struct.h"

/// Struct defined in action/PCA in the package pi_pca9685_interfaces.
typedef struct pi_pca9685_interfaces__action__PCA_GetResult_Response
{
  int8_t status;
  pi_pca9685_interfaces__action__PCA_Result result;
} pi_pca9685_interfaces__action__PCA_GetResult_Response;

// Struct for a sequence of pi_pca9685_interfaces__action__PCA_GetResult_Response.
typedef struct pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence
{
  pi_pca9685_interfaces__action__PCA_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__struct.h"

/// Struct defined in action/PCA in the package pi_pca9685_interfaces.
typedef struct pi_pca9685_interfaces__action__PCA_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pi_pca9685_interfaces__action__PCA_Feedback feedback;
} pi_pca9685_interfaces__action__PCA_FeedbackMessage;

// Struct for a sequence of pi_pca9685_interfaces__action__PCA_FeedbackMessage.
typedef struct pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence
{
  pi_pca9685_interfaces__action__PCA_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PI_PCA9685_INTERFACES__ACTION__DETAIL__PCA__STRUCT_H_
