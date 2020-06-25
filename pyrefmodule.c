#include <Python.h>

PyObject *value;

static PyObject* pyref_store(PyObject *self, PyObject* args) {
  PyArg_ParseTuple(args, "O", &value);
  Py_INCREF(value);
  Py_RETURN_NONE;
}

static PyObject* pyref_load(PyObject *self, PyObject* args) {
  Py_INCREF(value);
  return value;
}

static PyMethodDef PyRefMethods[] = {
  {"store", pyref_store, METH_VARARGS, "Store an object in module ...."},
  {"load", pyref_load, METH_NOARGS, "Load the value store in module ...."},
  {NULL, NULL, 0, NULL}
};

static struct PyModuleDef pyrefmodule = {
  PyModuleDef_HEAD_INIT,
  "pyref",
  NULL,
  -1,
  PyRefMethods
};

PyMODINIT_FUNC PyInit_pyref(void) {
  PyObject *m = PyModule_Create(&pyrefmodule);
  return m;
}

