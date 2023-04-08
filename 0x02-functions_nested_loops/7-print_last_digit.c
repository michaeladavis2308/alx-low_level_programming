# include "main.h"
/**
 * print_last_digit- a function that prints the last digit of a number
 * @n:the integer to be checked
 * Return:i-the last digit of a number
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n > 0)
	{
		_putchar(i + 48);
		return (i);
	}
	else
	{
		_putchar(-i + 48);
		return (-i);
	}
}

