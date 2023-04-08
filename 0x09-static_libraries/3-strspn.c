#include "main.h"
/**
 * _strspn-gets the length of a prefix substring.
 * @s: the string to be searched
 * @accept:contains x'ters that will be searched for in s
 * Return:(len of substring created)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int index1;
	int index2;

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[index1] == accept[index2])
			{
				len++;
				break;
			}
		}
		if (s[index1] != accept[index2])
		{
			return (len);
		}
	}
	return (len);
}
