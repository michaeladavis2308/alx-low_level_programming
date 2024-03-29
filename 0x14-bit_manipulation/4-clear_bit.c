#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n:unsigned long int
 * @index:index of the bit to set
 * Return: 1 or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
