#include "main.h"
/**
 * get-bit- return the value of a bit at a given index
 * @n:unsigned long int n
 * @index: index of bits of the unsigned long int
 * Return:value of bit at index/-1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
