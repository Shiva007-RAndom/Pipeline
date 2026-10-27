// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mission_interfaces:msg/RedPatch.idl
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
#include "mission_interfaces/msg/detail/red_patch__struct.h"
#include "mission_interfaces/msg/detail/red_patch__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/point32__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point32__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mission_interfaces__msg__red_patch__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("mission_interfaces.msg._red_patch.RedPatch", full_classname_dest, 42) == 0);
  }
  mission_interfaces__msg__RedPatch * ros_message = _ros_message;
  {  // centroid_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "centroid_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->centroid_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // centroid_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "centroid_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->centroid_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offset_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offset_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offset_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // area_px
    PyObject * field = PyObject_GetAttrString(_pymsg, "area_px");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->area_px = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // area_fraction
    PyObject * field = PyObject_GetAttrString(_pymsg, "area_fraction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->area_fraction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bbox_xywh
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox_xywh");
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
      assert(PyArray_TYPE(seq_field) == NPY_INT32);
      Py_ssize_t size = 4;
      int32_t * dest = ros_message->bbox_xywh;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int32_t tmp = *(npy_int32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // contour
    PyObject * field = PyObject_GetAttrString(_pymsg, "contour");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'contour'");
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
    if (!geometry_msgs__msg__Point32__Sequence__init(&(ros_message->contour), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Point32__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Point32 * dest = ros_message->contour.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point32__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mission_interfaces__msg__red_patch__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RedPatch */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mission_interfaces.msg._red_patch");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RedPatch");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mission_interfaces__msg__RedPatch * ros_message = (mission_interfaces__msg__RedPatch *)raw_ros_message;
  {  // centroid_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->centroid_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "centroid_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // centroid_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->centroid_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "centroid_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offset_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area_px
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->area_px);
    {
      int rc = PyObject_SetAttrString(_pymessage, "area_px", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // area_fraction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->area_fraction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "area_fraction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox_xywh
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "bbox_xywh");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    assert(sizeof(npy_int32) == sizeof(int32_t));
    npy_int32 * dst = (npy_int32 *)PyArray_GETPTR1(seq_field, 0);
    int32_t * src = &(ros_message->bbox_xywh[0]);
    memcpy(dst, src, 4 * sizeof(int32_t));
    Py_DECREF(field);
  }
  {  // contour
    PyObject * field = NULL;
    size_t size = ros_message->contour.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Point32 * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->contour.data[i]);
      PyObject * pyitem = geometry_msgs__msg__point32__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "contour", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
