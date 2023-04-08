#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers-prints numbers, followed by a new line.
 * @separator: strings between numbers
 * @n:number of parameters to be passed
 * @...: parameters to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list numbers;

	va_start(numbers, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
