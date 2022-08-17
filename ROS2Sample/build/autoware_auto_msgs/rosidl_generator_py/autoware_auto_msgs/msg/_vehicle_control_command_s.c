// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_auto_msgs:msg/VehicleControlCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_auto_msgs/msg/detail/vehicle_control_command__struct.h"
#include "autoware_auto_msgs/msg/detail/vehicle_control_command__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_auto_msgs__msg__vehicle_control_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("autoware_auto_msgs.msg._vehicle_control_command.VehicleControlCommand", full_classname_dest, 69) == 0);
  }
  autoware_auto_msgs__msg__VehicleControlCommand * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // long_accel_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_accel_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->long_accel_mps2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_mps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_wheel_angle_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_wheel_angle_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_wheel_angle_rad = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_wheel_angle_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_wheel_angle_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_wheel_angle_rad = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_auto_msgs__msg__vehicle_control_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleControlCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_auto_msgs.msg._vehicle_control_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleControlCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_auto_msgs__msg__VehicleControlCommand * ros_message = (autoware_auto_msgs__msg__VehicleControlCommand *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_accel_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->long_accel_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_accel_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_wheel_angle_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_wheel_angle_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_wheel_angle_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_wheel_angle_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_wheel_angle_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_wheel_angle_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
