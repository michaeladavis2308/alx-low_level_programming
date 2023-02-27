#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 * Return:void
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
