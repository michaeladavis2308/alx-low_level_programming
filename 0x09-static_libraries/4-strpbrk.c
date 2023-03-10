#include "main.h"
/**
 * _strpbrk- locates in a string any of a set of bytes
 * @s:the string being searched
 * @accept:the set of bytes being search for.
 * Return:pointer s/ null
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
