#include "main.h"
/**
 * _strchr-prints the first occurence of the specified x'ter in a string
 * @s:the string being searched
 * @c:the character being located
 * Return:s/ '\0'
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
