#include <stdio.h>
#include "main.h"
/**
 * print_array- prints n elements of an array of integers
 * @n:elements of array
 * @a:array of ints
 * Return:void
 */
void print_array(int *a, int n)
{
	int indexofn;

	for (indexofn = 0; indexofn < (n - 1); indexofn++)
	{
		printf("%d, ", a[indexofn]);
	}
	if (indexofn == (n - 1))
	{
		printf("%d", a[indexofn]);
	}
	printf("\n");
}


