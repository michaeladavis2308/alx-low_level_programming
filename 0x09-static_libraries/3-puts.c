#include "main.h"
/**
 * _puts - a fxn that prints a str
 * @str:the string being printed
 * Return:void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
