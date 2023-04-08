#include <stdlib.h>
#include "main.h"
/**
 * *create_array- creates an array of chars and initialises it
 * @size:the memory size to be allocated for the array
 * @c:the characters in the array of strings
 * Return: Null/ array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
