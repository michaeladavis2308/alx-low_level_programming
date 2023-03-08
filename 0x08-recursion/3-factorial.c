#include "main.h"
/**
 * factorial-returns the factorial of a given number.
 * @n:the given integer
 * Return:-1 when n < 0 , 1 for 0! & int for others
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
