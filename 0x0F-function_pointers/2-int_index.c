#include "function_pointers.h"
/**
 * int_index- searches for an integer
 * @array:a pointer to an array of int
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index of element that matches/-1 if it doesn't match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp && size > 0)
		for (index = 0; index < size; index++)
			if (cmp(array[index]))
				return (index);
	return (-1);
}
