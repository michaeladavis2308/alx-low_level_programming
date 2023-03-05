#include "main.h"
/**
 * _strchr-prints the first occurence of the specified x'ter in a string
 * @s:the string being searched
 * @c:the character being located
 * Return:s/NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
			i++;
		}
		s++;
	}
	return ('\0');
}
