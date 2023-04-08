#include <stdlib.h>
#include "main.h"
/**
 * str_concat- concatenates two strings allocating new mem to strconcat
 * @s1:the first string
 * @s2:the second string
 * Return:NULL/pointer to the concatenated str
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int index, concat_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat[concat_i++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat[concat_i++] = s2[index];

	return (concat);
}
