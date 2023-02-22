# include "main.h"
/**
 * _abs- a function that prints the absolute value of an int
 * @n: the int being checked.
 * Return:int when absolute & -int when not
 */

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
