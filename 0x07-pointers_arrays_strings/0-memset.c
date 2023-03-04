#include "main.h"
/**
 * _memset-fills memory with a constant byte.
 * @n:number of bytes to be filled starting from *s
 * @s:pointer holding starting address of memory to be filled
 * @b:the constant byte filling the memory area
 * Return:b
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (s && n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
