#include <stdio.h>
#include <stdlib.h>
#include <Python.h>
/**
 * print_python_list_info - Print some basic Python lists info
 * @p: Python Object
 *
 * Return: Null
 */
void print_python_list_info(PyObject *p)
{
PyObject *item;
PyListObject *list = (PyListObject *)p;
int a, size, alloc;

size = Py_SIZE(p);
alloc = list->allocated;
printf("[*] Size of the Python List = %d\n", size);
printf("[*] Allocated = %d\n", alloc);

for (a = 0; a < size; a++)
{
item =  PyList_GetItem(p, a);
printf("Element %d: %s\n", a, Py_TYPE(item)->tp_name);
}
}
