#include <python.h>

/**
 * print_python_list_info - it is  prints info about a python list.
 * @p:PyObject
 *Return:void
 */
void print_python_list_info(PyObject *p)
{
int size, i, allocate;
pyobject *obj;
size = py_SIZE(P);
allocate = ((pyListObject *)p)->allocated;
printf("[*] size of the python List = %d\n", size);
printf("[*] Allocated = %d\n", allocate);
for (i = 0; i < size; i++)
{
printf("element %d: ", i);
obj = pyList_GetItem(p, i);
printf("%s\n", py_TYPE(obj)->tp_name);
}
}


