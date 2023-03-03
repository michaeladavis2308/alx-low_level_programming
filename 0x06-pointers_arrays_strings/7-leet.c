#include "main.h"
/**
 *leet - encodes a string into 1337.
 *@n:the string to be encoded
 *Return:string
 */
char *leet(char *n)
{
	int i, x;
	int base[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int new[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == base[x])
			{
				n[i] = new[x / 2];
				x = 9;
			}
		}
	}
	return (n);
}
