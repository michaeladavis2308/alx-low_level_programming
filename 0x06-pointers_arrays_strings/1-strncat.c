#include "main.h"
/**
 * _strcat - a fxn that concatenates two strings
 * @src: the string to be added to the first string
 * @dest: the first string
 * @n:bytes from string src
 * Return:dest(the concatenated string)
 */
char *_strncat(char *dest, char *src, int n)
{
	int index1;
	int index2;
	/*_strcat = dest + src;*/
	/* Find the end of the string "dest"*/
	for (index1 = 0; dest[index1] != '\0'; index1++)
	{
		/*Concatenate the string src to string dest*/
	}
	for (index2 = 0; index2 < n && src[index2] != '\0'; index2++)
	{
		dest[index1] = src[index2];
		index1++;
	}
	return (dest);
}
