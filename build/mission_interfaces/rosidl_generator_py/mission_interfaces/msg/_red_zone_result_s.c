// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mission_interfaces:msg/RedZoneResult.idl
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
#include "mission_interfaces/msg/detail/red_zone_result__struct.h"
#include "mission_interfaces/msg/detail/red_zone_result__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "mission_interfaces/msg/detail/red_patch__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool mission_interfaces__msg__red_patch__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mission_interfaces__msg__red_patch__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mission_interfaces__msg__red_zone_result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("mission_interfaces.msg._red_zone_result.RedZoneResult", full_classname_dest, 53) == 0);
  }
  mission_interfaces__msg__RedZoneResult * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // image_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "image_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->image_width = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // image_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "image_height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->image_height = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // num_patches
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_patches");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_patches = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // total_area_fraction
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_area_fraction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_area_fraction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // patches
    PyObject * field = PyObject_GetAttrString(_pymsg, "patches");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'patches'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!mission_interfaces__msg__RedPatch__Sequence__init(&(ros_message->patches), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mission_interfaces__msg__RedPatch__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mission_interfaces__msg__RedPatch * dest = ros_message->patches.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mission_interfaces__msg__red_patch__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // processing_time_ms
    PyObject * field = PyObject_GetAttrString(_pymsg, "processing_time_ms");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->processing_time_ms = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mission_interfaces__msg__red_zone_result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RedZoneResult */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mission_interfaces.msg._red_zone_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RedZoneResult");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mission_interfaces__msg__RedZoneResult * ros_message = (mission_interfaces__msg__RedZoneResult *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // image_width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->image_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "image_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // image_height
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->image_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "image_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->detected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_patches
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_patches);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_patches", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_area_fraction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_area_fraction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_area_fraction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // patches
    PyObject * field = NULL;
    size_t size = ros_message->patches.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mission_interfaces__msg__RedPatch * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->patches.data[i]);
      PyObject * pyitem = mission_interfaces__msg__red_patch__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "patches", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // processing_time_ms
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->processing_time_ms);
    {
      int rc = PyObject_SetAttrString(_pymessage, "processing_time_ms", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
