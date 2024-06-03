// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pi_pca9685_interfaces:action/PCA.idl
// generated code does not contain a copyright notice
#include "pi_pca9685_interfaces/action/detail/pca__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pca`
#include "rosidl_runtime_c/string_functions.h"

bool
pi_pca9685_interfaces__action__PCA_Goal__init(pi_pca9685_interfaces__action__PCA_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // pca
  if (!rosidl_runtime_c__String__init(&msg->pca)) {
    pi_pca9685_interfaces__action__PCA_Goal__fini(msg);
    return false;
  }
  return true;
}

void
pi_pca9685_interfaces__action__PCA_Goal__fini(pi_pca9685_interfaces__action__PCA_Goal * msg)
{
  if (!msg) {
    return;
  }
  // pca
  rosidl_runtime_c__String__fini(&msg->pca);
}

bool
pi_pca9685_interfaces__action__PCA_Goal__are_equal(const pi_pca9685_interfaces__action__PCA_Goal * lhs, const pi_pca9685_interfaces__action__PCA_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pca
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pca), &(rhs->pca)))
  {
    return false;
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_Goal__copy(
  const pi_pca9685_interfaces__action__PCA_Goal * input,
  pi_pca9685_interfaces__action__PCA_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // pca
  if (!rosidl_runtime_c__String__copy(
      &(input->pca), &(output->pca)))
  {
    return false;
  }
  return true;
}

pi_pca9685_interfaces__action__PCA_Goal *
pi_pca9685_interfaces__action__PCA_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_Goal * msg = (pi_pca9685_interfaces__action__PCA_Goal *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_pca9685_interfaces__action__PCA_Goal));
  bool success = pi_pca9685_interfaces__action__PCA_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi_pca9685_interfaces__action__PCA_Goal__destroy(pi_pca9685_interfaces__action__PCA_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi_pca9685_interfaces__action__PCA_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi_pca9685_interfaces__action__PCA_Goal__Sequence__init(pi_pca9685_interfaces__action__PCA_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_Goal * data = NULL;

  if (size) {
    data = (pi_pca9685_interfaces__action__PCA_Goal *)allocator.zero_allocate(size, sizeof(pi_pca9685_interfaces__action__PCA_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_pca9685_interfaces__action__PCA_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_pca9685_interfaces__action__PCA_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_pca9685_interfaces__action__PCA_Goal__Sequence__fini(pi_pca9685_interfaces__action__PCA_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_pca9685_interfaces__action__PCA_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_pca9685_interfaces__action__PCA_Goal__Sequence *
pi_pca9685_interfaces__action__PCA_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_Goal__Sequence * array = (pi_pca9685_interfaces__action__PCA_Goal__Sequence *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi_pca9685_interfaces__action__PCA_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi_pca9685_interfaces__action__PCA_Goal__Sequence__destroy(pi_pca9685_interfaces__action__PCA_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi_pca9685_interfaces__action__PCA_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi_pca9685_interfaces__action__PCA_Goal__Sequence__are_equal(const pi_pca9685_interfaces__action__PCA_Goal__Sequence * lhs, const pi_pca9685_interfaces__action__PCA_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_Goal__Sequence__copy(
  const pi_pca9685_interfaces__action__PCA_Goal__Sequence * input,
  pi_pca9685_interfaces__action__PCA_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi_pca9685_interfaces__action__PCA_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi_pca9685_interfaces__action__PCA_Goal * data =
      (pi_pca9685_interfaces__action__PCA_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi_pca9685_interfaces__action__PCA_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi_pca9685_interfaces__action__PCA_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pi_pca9685_interfaces__action__PCA_Result__init(pi_pca9685_interfaces__action__PCA_Result * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
pi_pca9685_interfaces__action__PCA_Result__fini(pi_pca9685_interfaces__action__PCA_Result * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
pi_pca9685_interfaces__action__PCA_Result__are_equal(const pi_pca9685_interfaces__action__PCA_Result * lhs, const pi_pca9685_interfaces__action__PCA_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_Result__copy(
  const pi_pca9685_interfaces__action__PCA_Result * input,
  pi_pca9685_interfaces__action__PCA_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

pi_pca9685_interfaces__action__PCA_Result *
pi_pca9685_interfaces__action__PCA_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_Result * msg = (pi_pca9685_interfaces__action__PCA_Result *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_pca9685_interfaces__action__PCA_Result));
  bool success = pi_pca9685_interfaces__action__PCA_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi_pca9685_interfaces__action__PCA_Result__destroy(pi_pca9685_interfaces__action__PCA_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi_pca9685_interfaces__action__PCA_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi_pca9685_interfaces__action__PCA_Result__Sequence__init(pi_pca9685_interfaces__action__PCA_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_Result * data = NULL;

  if (size) {
    data = (pi_pca9685_interfaces__action__PCA_Result *)allocator.zero_allocate(size, sizeof(pi_pca9685_interfaces__action__PCA_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_pca9685_interfaces__action__PCA_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_pca9685_interfaces__action__PCA_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_pca9685_interfaces__action__PCA_Result__Sequence__fini(pi_pca9685_interfaces__action__PCA_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_pca9685_interfaces__action__PCA_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_pca9685_interfaces__action__PCA_Result__Sequence *
pi_pca9685_interfaces__action__PCA_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_Result__Sequence * array = (pi_pca9685_interfaces__action__PCA_Result__Sequence *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi_pca9685_interfaces__action__PCA_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi_pca9685_interfaces__action__PCA_Result__Sequence__destroy(pi_pca9685_interfaces__action__PCA_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi_pca9685_interfaces__action__PCA_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi_pca9685_interfaces__action__PCA_Result__Sequence__are_equal(const pi_pca9685_interfaces__action__PCA_Result__Sequence * lhs, const pi_pca9685_interfaces__action__PCA_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_Result__Sequence__copy(
  const pi_pca9685_interfaces__action__PCA_Result__Sequence * input,
  pi_pca9685_interfaces__action__PCA_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi_pca9685_interfaces__action__PCA_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi_pca9685_interfaces__action__PCA_Result * data =
      (pi_pca9685_interfaces__action__PCA_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi_pca9685_interfaces__action__PCA_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi_pca9685_interfaces__action__PCA_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pi_pca9685_interfaces__action__PCA_Feedback__init(pi_pca9685_interfaces__action__PCA_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  return true;
}

void
pi_pca9685_interfaces__action__PCA_Feedback__fini(pi_pca9685_interfaces__action__PCA_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
}

bool
pi_pca9685_interfaces__action__PCA_Feedback__are_equal(const pi_pca9685_interfaces__action__PCA_Feedback * lhs, const pi_pca9685_interfaces__action__PCA_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (lhs->feedback != rhs->feedback) {
    return false;
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_Feedback__copy(
  const pi_pca9685_interfaces__action__PCA_Feedback * input,
  pi_pca9685_interfaces__action__PCA_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  output->feedback = input->feedback;
  return true;
}

pi_pca9685_interfaces__action__PCA_Feedback *
pi_pca9685_interfaces__action__PCA_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_Feedback * msg = (pi_pca9685_interfaces__action__PCA_Feedback *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_pca9685_interfaces__action__PCA_Feedback));
  bool success = pi_pca9685_interfaces__action__PCA_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi_pca9685_interfaces__action__PCA_Feedback__destroy(pi_pca9685_interfaces__action__PCA_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi_pca9685_interfaces__action__PCA_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi_pca9685_interfaces__action__PCA_Feedback__Sequence__init(pi_pca9685_interfaces__action__PCA_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_Feedback * data = NULL;

  if (size) {
    data = (pi_pca9685_interfaces__action__PCA_Feedback *)allocator.zero_allocate(size, sizeof(pi_pca9685_interfaces__action__PCA_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_pca9685_interfaces__action__PCA_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_pca9685_interfaces__action__PCA_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_pca9685_interfaces__action__PCA_Feedback__Sequence__fini(pi_pca9685_interfaces__action__PCA_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_pca9685_interfaces__action__PCA_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_pca9685_interfaces__action__PCA_Feedback__Sequence *
pi_pca9685_interfaces__action__PCA_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_Feedback__Sequence * array = (pi_pca9685_interfaces__action__PCA_Feedback__Sequence *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi_pca9685_interfaces__action__PCA_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi_pca9685_interfaces__action__PCA_Feedback__Sequence__destroy(pi_pca9685_interfaces__action__PCA_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi_pca9685_interfaces__action__PCA_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi_pca9685_interfaces__action__PCA_Feedback__Sequence__are_equal(const pi_pca9685_interfaces__action__PCA_Feedback__Sequence * lhs, const pi_pca9685_interfaces__action__PCA_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_Feedback__Sequence__copy(
  const pi_pca9685_interfaces__action__PCA_Feedback__Sequence * input,
  pi_pca9685_interfaces__action__PCA_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi_pca9685_interfaces__action__PCA_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi_pca9685_interfaces__action__PCA_Feedback * data =
      (pi_pca9685_interfaces__action__PCA_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi_pca9685_interfaces__action__PCA_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi_pca9685_interfaces__action__PCA_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__functions.h"

bool
pi_pca9685_interfaces__action__PCA_SendGoal_Request__init(pi_pca9685_interfaces__action__PCA_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pi_pca9685_interfaces__action__PCA_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!pi_pca9685_interfaces__action__PCA_Goal__init(&msg->goal)) {
    pi_pca9685_interfaces__action__PCA_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
pi_pca9685_interfaces__action__PCA_SendGoal_Request__fini(pi_pca9685_interfaces__action__PCA_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  pi_pca9685_interfaces__action__PCA_Goal__fini(&msg->goal);
}

bool
pi_pca9685_interfaces__action__PCA_SendGoal_Request__are_equal(const pi_pca9685_interfaces__action__PCA_SendGoal_Request * lhs, const pi_pca9685_interfaces__action__PCA_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!pi_pca9685_interfaces__action__PCA_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_SendGoal_Request__copy(
  const pi_pca9685_interfaces__action__PCA_SendGoal_Request * input,
  pi_pca9685_interfaces__action__PCA_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!pi_pca9685_interfaces__action__PCA_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

pi_pca9685_interfaces__action__PCA_SendGoal_Request *
pi_pca9685_interfaces__action__PCA_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_SendGoal_Request * msg = (pi_pca9685_interfaces__action__PCA_SendGoal_Request *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_pca9685_interfaces__action__PCA_SendGoal_Request));
  bool success = pi_pca9685_interfaces__action__PCA_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi_pca9685_interfaces__action__PCA_SendGoal_Request__destroy(pi_pca9685_interfaces__action__PCA_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi_pca9685_interfaces__action__PCA_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence__init(pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_SendGoal_Request * data = NULL;

  if (size) {
    data = (pi_pca9685_interfaces__action__PCA_SendGoal_Request *)allocator.zero_allocate(size, sizeof(pi_pca9685_interfaces__action__PCA_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_pca9685_interfaces__action__PCA_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_pca9685_interfaces__action__PCA_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence__fini(pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_pca9685_interfaces__action__PCA_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence *
pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence * array = (pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence__destroy(pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence__are_equal(const pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence * lhs, const pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence__copy(
  const pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence * input,
  pi_pca9685_interfaces__action__PCA_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi_pca9685_interfaces__action__PCA_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi_pca9685_interfaces__action__PCA_SendGoal_Request * data =
      (pi_pca9685_interfaces__action__PCA_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi_pca9685_interfaces__action__PCA_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi_pca9685_interfaces__action__PCA_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pi_pca9685_interfaces__action__PCA_SendGoal_Response__init(pi_pca9685_interfaces__action__PCA_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pi_pca9685_interfaces__action__PCA_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
pi_pca9685_interfaces__action__PCA_SendGoal_Response__fini(pi_pca9685_interfaces__action__PCA_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
pi_pca9685_interfaces__action__PCA_SendGoal_Response__are_equal(const pi_pca9685_interfaces__action__PCA_SendGoal_Response * lhs, const pi_pca9685_interfaces__action__PCA_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_SendGoal_Response__copy(
  const pi_pca9685_interfaces__action__PCA_SendGoal_Response * input,
  pi_pca9685_interfaces__action__PCA_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

pi_pca9685_interfaces__action__PCA_SendGoal_Response *
pi_pca9685_interfaces__action__PCA_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_SendGoal_Response * msg = (pi_pca9685_interfaces__action__PCA_SendGoal_Response *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_pca9685_interfaces__action__PCA_SendGoal_Response));
  bool success = pi_pca9685_interfaces__action__PCA_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi_pca9685_interfaces__action__PCA_SendGoal_Response__destroy(pi_pca9685_interfaces__action__PCA_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi_pca9685_interfaces__action__PCA_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence__init(pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_SendGoal_Response * data = NULL;

  if (size) {
    data = (pi_pca9685_interfaces__action__PCA_SendGoal_Response *)allocator.zero_allocate(size, sizeof(pi_pca9685_interfaces__action__PCA_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_pca9685_interfaces__action__PCA_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_pca9685_interfaces__action__PCA_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence__fini(pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_pca9685_interfaces__action__PCA_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence *
pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence * array = (pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence__destroy(pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence__are_equal(const pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence * lhs, const pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence__copy(
  const pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence * input,
  pi_pca9685_interfaces__action__PCA_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi_pca9685_interfaces__action__PCA_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi_pca9685_interfaces__action__PCA_SendGoal_Response * data =
      (pi_pca9685_interfaces__action__PCA_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi_pca9685_interfaces__action__PCA_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi_pca9685_interfaces__action__PCA_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
pi_pca9685_interfaces__action__PCA_GetResult_Request__init(pi_pca9685_interfaces__action__PCA_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pi_pca9685_interfaces__action__PCA_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
pi_pca9685_interfaces__action__PCA_GetResult_Request__fini(pi_pca9685_interfaces__action__PCA_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
pi_pca9685_interfaces__action__PCA_GetResult_Request__are_equal(const pi_pca9685_interfaces__action__PCA_GetResult_Request * lhs, const pi_pca9685_interfaces__action__PCA_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_GetResult_Request__copy(
  const pi_pca9685_interfaces__action__PCA_GetResult_Request * input,
  pi_pca9685_interfaces__action__PCA_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

pi_pca9685_interfaces__action__PCA_GetResult_Request *
pi_pca9685_interfaces__action__PCA_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_GetResult_Request * msg = (pi_pca9685_interfaces__action__PCA_GetResult_Request *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_pca9685_interfaces__action__PCA_GetResult_Request));
  bool success = pi_pca9685_interfaces__action__PCA_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi_pca9685_interfaces__action__PCA_GetResult_Request__destroy(pi_pca9685_interfaces__action__PCA_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi_pca9685_interfaces__action__PCA_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence__init(pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_GetResult_Request * data = NULL;

  if (size) {
    data = (pi_pca9685_interfaces__action__PCA_GetResult_Request *)allocator.zero_allocate(size, sizeof(pi_pca9685_interfaces__action__PCA_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_pca9685_interfaces__action__PCA_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_pca9685_interfaces__action__PCA_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence__fini(pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_pca9685_interfaces__action__PCA_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence *
pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence * array = (pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence__destroy(pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence__are_equal(const pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence * lhs, const pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence__copy(
  const pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence * input,
  pi_pca9685_interfaces__action__PCA_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi_pca9685_interfaces__action__PCA_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi_pca9685_interfaces__action__PCA_GetResult_Request * data =
      (pi_pca9685_interfaces__action__PCA_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi_pca9685_interfaces__action__PCA_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi_pca9685_interfaces__action__PCA_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__functions.h"

bool
pi_pca9685_interfaces__action__PCA_GetResult_Response__init(pi_pca9685_interfaces__action__PCA_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!pi_pca9685_interfaces__action__PCA_Result__init(&msg->result)) {
    pi_pca9685_interfaces__action__PCA_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
pi_pca9685_interfaces__action__PCA_GetResult_Response__fini(pi_pca9685_interfaces__action__PCA_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  pi_pca9685_interfaces__action__PCA_Result__fini(&msg->result);
}

bool
pi_pca9685_interfaces__action__PCA_GetResult_Response__are_equal(const pi_pca9685_interfaces__action__PCA_GetResult_Response * lhs, const pi_pca9685_interfaces__action__PCA_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!pi_pca9685_interfaces__action__PCA_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_GetResult_Response__copy(
  const pi_pca9685_interfaces__action__PCA_GetResult_Response * input,
  pi_pca9685_interfaces__action__PCA_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!pi_pca9685_interfaces__action__PCA_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

pi_pca9685_interfaces__action__PCA_GetResult_Response *
pi_pca9685_interfaces__action__PCA_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_GetResult_Response * msg = (pi_pca9685_interfaces__action__PCA_GetResult_Response *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_pca9685_interfaces__action__PCA_GetResult_Response));
  bool success = pi_pca9685_interfaces__action__PCA_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi_pca9685_interfaces__action__PCA_GetResult_Response__destroy(pi_pca9685_interfaces__action__PCA_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi_pca9685_interfaces__action__PCA_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence__init(pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_GetResult_Response * data = NULL;

  if (size) {
    data = (pi_pca9685_interfaces__action__PCA_GetResult_Response *)allocator.zero_allocate(size, sizeof(pi_pca9685_interfaces__action__PCA_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_pca9685_interfaces__action__PCA_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_pca9685_interfaces__action__PCA_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence__fini(pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_pca9685_interfaces__action__PCA_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence *
pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence * array = (pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence__destroy(pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence__are_equal(const pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence * lhs, const pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence__copy(
  const pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence * input,
  pi_pca9685_interfaces__action__PCA_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi_pca9685_interfaces__action__PCA_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi_pca9685_interfaces__action__PCA_GetResult_Response * data =
      (pi_pca9685_interfaces__action__PCA_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi_pca9685_interfaces__action__PCA_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi_pca9685_interfaces__action__PCA_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "pi_pca9685_interfaces/action/detail/pca__functions.h"

bool
pi_pca9685_interfaces__action__PCA_FeedbackMessage__init(pi_pca9685_interfaces__action__PCA_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pi_pca9685_interfaces__action__PCA_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!pi_pca9685_interfaces__action__PCA_Feedback__init(&msg->feedback)) {
    pi_pca9685_interfaces__action__PCA_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
pi_pca9685_interfaces__action__PCA_FeedbackMessage__fini(pi_pca9685_interfaces__action__PCA_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  pi_pca9685_interfaces__action__PCA_Feedback__fini(&msg->feedback);
}

bool
pi_pca9685_interfaces__action__PCA_FeedbackMessage__are_equal(const pi_pca9685_interfaces__action__PCA_FeedbackMessage * lhs, const pi_pca9685_interfaces__action__PCA_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pi_pca9685_interfaces__action__PCA_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_FeedbackMessage__copy(
  const pi_pca9685_interfaces__action__PCA_FeedbackMessage * input,
  pi_pca9685_interfaces__action__PCA_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pi_pca9685_interfaces__action__PCA_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

pi_pca9685_interfaces__action__PCA_FeedbackMessage *
pi_pca9685_interfaces__action__PCA_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_FeedbackMessage * msg = (pi_pca9685_interfaces__action__PCA_FeedbackMessage *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pi_pca9685_interfaces__action__PCA_FeedbackMessage));
  bool success = pi_pca9685_interfaces__action__PCA_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pi_pca9685_interfaces__action__PCA_FeedbackMessage__destroy(pi_pca9685_interfaces__action__PCA_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pi_pca9685_interfaces__action__PCA_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence__init(pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_FeedbackMessage * data = NULL;

  if (size) {
    data = (pi_pca9685_interfaces__action__PCA_FeedbackMessage *)allocator.zero_allocate(size, sizeof(pi_pca9685_interfaces__action__PCA_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pi_pca9685_interfaces__action__PCA_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pi_pca9685_interfaces__action__PCA_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence__fini(pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pi_pca9685_interfaces__action__PCA_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence *
pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence * array = (pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence *)allocator.allocate(sizeof(pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence__destroy(pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence__are_equal(const pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence * lhs, const pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence__copy(
  const pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence * input,
  pi_pca9685_interfaces__action__PCA_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pi_pca9685_interfaces__action__PCA_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pi_pca9685_interfaces__action__PCA_FeedbackMessage * data =
      (pi_pca9685_interfaces__action__PCA_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pi_pca9685_interfaces__action__PCA_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pi_pca9685_interfaces__action__PCA_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pi_pca9685_interfaces__action__PCA_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
