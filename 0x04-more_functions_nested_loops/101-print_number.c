#include "main.h"
/**
 * print_number- a function that prints an integer
 * @n: integer to be printed
 * Return: int n
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
	{
		n = n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
