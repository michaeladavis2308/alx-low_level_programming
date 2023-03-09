#include "main.h"
/**
 * _sqrt-checks for the sgrt of x^y
 * @x:int
 * @y:exponent of int
 * Return:int /-1 when error occurs
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}
int _sqrt(int x, int y);
/**
 * _sqrt_recursion - returns the natural squareroot of n
 * @n:a given int
 * Return:1 on success
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
