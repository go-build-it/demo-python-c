#include <Python.h>

static PyObject* helloworld(PyObject* self) {
    return Py_BuildValue("s", "Hello, Python extensions!!");
}

static char helloworld_docs[] =
    "helloworld( ): Any message you want to put here!!\n";

static PyMethodDef helloworld_methods[] = {
   {"helloworld", (PyCFunction)helloworld, METH_NOARGS, helloworld_docs},
   {NULL, NULL, 0, NULL}
};

static struct PyModuleDef helloworldmodule =
{
    PyModuleDef_HEAD_INIT,
    "helloworld", /* name of module */
    "Extension module example!",          /* module documentation, may be NULL */
    -1,          /* size of per-interpreter state of the module, or -1 if the module keeps state in global variables. */
    helloworld_methods
};

PyMODINIT_FUNC PyInit_helloworld(void) {
    return PyModule_Create(&helloworldmodule);
}
