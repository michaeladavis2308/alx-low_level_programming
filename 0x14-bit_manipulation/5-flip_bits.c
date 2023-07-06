#include "main.h"
/**
 * flip_bits-computes the diff b/n the bits
 * of one number to the other
 * @n: first number
 * @m: second number
 * Return: difference of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compute;
	unsigned int difference = 0;

	compute = n ^ m;
	while (compute > 0)
	{
		if (compute & 1)
		{
			difference++;
		}
		compute >>= 1;
	}
	return (difference);
}
