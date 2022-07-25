// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_planning_msgs:msg/Approval.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/approval__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_auto_planning_msgs__msg__Approval__init(autoware_auto_planning_msgs__msg__Approval * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_planning_msgs__msg__Approval__fini(msg);
    return false;
  }
  // approval
  msg->approval = false;
  return true;
}

void
autoware_auto_planning_msgs__msg__Approval__fini(autoware_auto_planning_msgs__msg__Approval * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // approval
}

autoware_auto_planning_msgs__msg__Approval *
autoware_auto_planning_msgs__msg__Approval__create()
{
  autoware_auto_planning_msgs__msg__Approval * msg = (autoware_auto_planning_msgs__msg__Approval *)malloc(sizeof(autoware_auto_planning_msgs__msg__Approval));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_planning_msgs__msg__Approval));
  bool success = autoware_auto_planning_msgs__msg__Approval__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_planning_msgs__msg__Approval__destroy(autoware_auto_planning_msgs__msg__Approval * msg)
{
  if (msg) {
    autoware_auto_planning_msgs__msg__Approval__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_planning_msgs__msg__Approval__Sequence__init(autoware_auto_planning_msgs__msg__Approval__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_planning_msgs__msg__Approval * data = NULL;
  if (size) {
    data = (autoware_auto_planning_msgs__msg__Approval *)calloc(size, sizeof(autoware_auto_planning_msgs__msg__Approval));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_planning_msgs__msg__Approval__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_planning_msgs__msg__Approval__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autoware_auto_planning_msgs__msg__Approval__Sequence__fini(autoware_auto_planning_msgs__msg__Approval__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_planning_msgs__msg__Approval__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autoware_auto_planning_msgs__msg__Approval__Sequence *
autoware_auto_planning_msgs__msg__Approval__Sequence__create(size_t size)
{
  autoware_auto_planning_msgs__msg__Approval__Sequence * array = (autoware_auto_planning_msgs__msg__Approval__Sequence *)malloc(sizeof(autoware_auto_planning_msgs__msg__Approval__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_planning_msgs__msg__Approval__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_planning_msgs__msg__Approval__Sequence__destroy(autoware_auto_planning_msgs__msg__Approval__Sequence * array)
{
  if (array) {
    autoware_auto_planning_msgs__msg__Approval__Sequence__fini(array);
  }
  free(array);
}
