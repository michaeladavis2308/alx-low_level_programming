#include "main.h"
#include <stdio.h>
/**
 * print_diagsums-prints a sum of two diagonals of square matrix of ints.
 * @a: array of integers
 * @size:a square matrix
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 = sum1 + a[index];
		a += size;
	}
	a = a - size;

	for (index = 0; index < size; index++)
	{
		sum2 = sum2 + a[index];
		a = a - size;
	}
	printf("%d, %d\n", sum1, sum2);
}
