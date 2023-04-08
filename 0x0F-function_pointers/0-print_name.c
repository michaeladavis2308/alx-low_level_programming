#include "function_pointers.h"
/**
 * print_name-prints name to rthe standard output
 * @name:variable to be printed
 * @f:function pointer which passes a set of char as arg
 * Return:nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
