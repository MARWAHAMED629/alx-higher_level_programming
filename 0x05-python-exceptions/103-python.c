#include <Python.h>
#include <stdio.h>
#include <stdlib.h>
#include <object.h>
#include <listobject.h>
#include <bytesobject.h>
#include <floatobject.h>
#include <string.h>
/**
 * print_python_bytes - print python thing.
 * @p: pointer to PyObject p
 */
void print_python_bytes(PyObject *p)
{
	size_t a, z;
	char *str;

	setbuf(stdout, NULL);
	printf("[.] bytes object info\n");
	if (PyBytes_Check(p) == 0)
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}
	str = ((PyBytesObject *)(p))->ob_sval, a = PyBytes_Size(p);
	printf("  size: %ld\n  trying string: %s\n", a, str);
	a >= 10 ? a = 10 : a++;
	printf("  first %ld bytes: ", a);
	for (z = 0; z < a - 1; z++)
		printf("%02hhx ", str[z]);
	printf("%02hhx\n", str[z]);
}
/**
 * print_python_float - print python thing.
 * @p: pointer to PyObject p
 */
void print_python_float(PyObject *p)
{
	char *s;
	double f;

	setbuf(stdout, NULL);
	printf("[.] float object info\n");
	if (PyFloat_Check(p) == 0)
	{
		printf("  [ERROR] Invalid Float Object\n");
		return;
	}
	f = ((PyFloatObject *)(p))->ob_fval;
	s = PyOS_double_to_string(f, 'r', 0, Py_DTSF_ADD_DOT_0, NULL);
	printf("  value: %s\n", s);
}
/**
 * print_python_list - print python thing
 * @p: pointer to PyObject p
 */
void print_python_list(PyObject *p)
{
	size_t b, size, o;
	const char *t;
	PyListObject *list;

	setbuf(stdout, NULL);
	printf("[*] Python list info\n");
	if (PyList_Check(p) == 0)
	{
		printf("  [ERROR] Invalid List Object\n");
		return;
	}
	list = (PyListObject *)p;
	size = PyList_GET_SIZE(p);
	b = list->allocated;
	printf("[*] Size of the Python List = %ld\n[*] Allocated = %li\n", size, b);
	for (o = 0; o < size; o++)
	{
		t = (list->ob_item[o])->ob_type->tp_name;
		printf("Element %li: %s\n", o, t);
		!strcmp(t, "bytes") ? print_python_bytes(list->ob_item[o]) : (void)t;
		!strcmp(t, "float") ? print_python_float(list->ob_item[o]) : (void)t;
	}
}
