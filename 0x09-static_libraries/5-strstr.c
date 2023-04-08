#include "main.h"
/**
 * _strstr - prints a given substring found in a base string.
 * @haystack:the base string in which the substring is found.
 * @needle:the substring to be found
 * Return:null/haystack
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int len = 0;

	while (needle[len] != '\0')
		len++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != len)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
