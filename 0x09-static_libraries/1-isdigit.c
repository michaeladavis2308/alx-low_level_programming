#include "main.h"
/**
 * _isdigit- a function that checks for a digit (0 thru 9)
 * @c: the integer being checked
 * Return: 1 if  a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
