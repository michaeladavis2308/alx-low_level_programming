#include "main.h"
/**
 * _memcpy- copies memory area.
 * @src:the pointer to be copied
 * @dest:the dest were copied memory is kept
 * @n:the max. num of copies to be made.
 * Return:dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
