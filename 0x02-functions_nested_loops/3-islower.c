#include "main.h"
/**
 * _islower - is a function that checks if a character is lowercase/not.
 * @c: is the character to be checked.
 * Return:1 f check is done) || 0 (if check has been complete)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
