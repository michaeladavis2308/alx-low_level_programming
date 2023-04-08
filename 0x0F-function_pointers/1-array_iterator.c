#include "function_pointers.h"
/**
 * array_iterator-exec. a fxn given as a parameter on each element of an array
 * @array: a pointer to an array
 * @size: size of the array
 * @action:fxn pointer with parameter int to be executed.
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != 0 && size >= 1 && array != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
