// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_geometry_msgs:msg/RelativePositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice
#include "autoware_auto_geometry_msgs/msg/detail/relative_position_with_covariance_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__init(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(msg);
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__init(&msg->child_frame_id)) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(msg);
    return false;
  }
  // covariance
  return true;
}

void
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // child_frame_id
  rosidl_runtime_c__String__fini(&msg->child_frame_id);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // covariance
}

autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped *
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__create()
{
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * msg = (autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped *)malloc(sizeof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped));
  bool success = autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__destroy(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * msg)
{
  if (msg) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__init(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * data = NULL;
  if (size) {
    data = (autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped *)calloc(size, sizeof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(&data[i - 1]);
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
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__fini(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__fini(&array->data[i]);
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

autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence *
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__create(size_t size)
{
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * array = (autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence *)malloc(sizeof(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__destroy(autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence * array)
{
  if (array) {
    autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence__fini(array);
  }
  free(array);
}
