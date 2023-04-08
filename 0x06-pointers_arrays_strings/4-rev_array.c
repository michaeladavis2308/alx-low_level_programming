#include "main.h"
/**
 * reverse_array - a fxn that reverses the elements of an array
 * @a:an array of integers
 * @n:the number of elements, to swap
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}

