// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mission_interfaces:msg/QrDetection.idl
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
#include "mission_interfaces/msg/detail/qr_detection__struct.h"
#include "mission_interfaces/msg/detail/qr_detection__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mission_interfaces__msg__qr_detection__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("mission_interfaces.msg._qr_detection.QrDetection", full_classname_dest, 48) == 0);
  }
  mission_interfaces__msg__QrDetection * ros_message = _ros_message;
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
  {  // detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "detected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->detected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // corners
    PyObject * field = PyObject_GetAttrString(_pymsg, "corners");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 8;
      float * dest = ros_message->corners;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // u
    PyObject * field = PyObject_GetAttrString(_pymsg, "u");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->u = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v
    PyObject * field = PyObject_GetAttrString(_pymsg, "v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // decoded_text
    PyObject * field = PyObject_GetAttrString(_pymsg, "decoded_text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->decoded_text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // reference_ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reference_ready = (Py_True == field);
    Py_DECREF(field);
  }
  {  // score
    PyObject * field = PyObject_GetAttrString(_pymsg, "score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matched
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->matched = (Py_True == field);
    Py_DECREF(field);
  }
  {  // match_threshold
    PyObject * field = PyObject_GetAttrString(_pymsg, "match_threshold");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->match_threshold = (float)PyFloat_AS_DOUBLE(field);
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
  {  // pose_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pose_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // alt_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "alt_rel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alt_rel = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drone_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drone_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drone_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drone_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drone_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drone_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drone_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "drone_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->drone_heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_estimate
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_estimate");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->position_estimate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mission_interfaces__msg__qr_detection__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of QrDetection */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mission_interfaces.msg._qr_detection");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "QrDetection");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mission_interfaces__msg__QrDetection * ros_message = (mission_interfaces__msg__QrDetection *)raw_ros_message;
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
  {  // corners
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "corners");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->corners[0]);
    memcpy(dst, src, 8 * sizeof(float));
    Py_DECREF(field);
  }
  {  // u
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->u);
    {
      int rc = PyObject_SetAttrString(_pymessage, "u", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // decoded_text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->decoded_text.data,
      strlen(ros_message->decoded_text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "decoded_text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reference_ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->matched ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // match_threshold
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->match_threshold);
    {
      int rc = PyObject_SetAttrString(_pymessage, "match_threshold", field);
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
  {  // pose_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pose_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alt_rel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alt_rel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alt_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drone_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drone_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drone_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drone_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drone_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drone_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drone_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drone_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drone_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drone_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->drone_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drone_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_estimate
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->position_estimate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_estimate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
