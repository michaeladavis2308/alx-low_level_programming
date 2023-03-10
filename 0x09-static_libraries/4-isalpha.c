# include "main.h"
/**
 * _isalpha- checks for alphabetic characters
 * @c: character to be checked
 * Return: 1 (if checked) or 0(if unsuccessful)
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
