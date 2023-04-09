#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b:pointer to a string of 0 and 1 chars
 * Return: unsigned nummber/ 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int index = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		number <<= 1; /* Shift number left by one bit */
		if (b[index] == '1')
		{
			number |= 1; /*Set least significant bit to 1*/
		}
		index++;
	}
	return (number);
}

