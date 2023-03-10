#include "main.h"
/**
 * _strcpy -a function that copies the string pointed to by src
 * @dest:a buffer to copy string to
 * @src:string source
 * Return:char(dest)
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
