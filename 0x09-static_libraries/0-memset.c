#include "main.h"
/**
 * _memset-fills memory with a constant byte.
 * @n:number of bytes to be filled starting from *s
 * @s:pointer holding starting address of memory to be filled
 * @b:the constant byte filling the memory area
 * Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
