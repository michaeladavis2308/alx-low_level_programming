#include "main.h"
/**
 * print_diagonal-a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return:void
 */
void print_diagonal(int n)
{
	int l, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			for (d = 0; d < l; d++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
