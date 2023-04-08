#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- returns the sum of all its parameters
 * @n:the number of parameters to be passed
 * @...:A number of parameters to be calculated
 * Return:sum / 0
 */
int sum_them_all(const unsigned int n, ...)
{
	/*define a va_list variable*/
	va_list args;

	unsigned int index, sum = 0;

	if (n != 0)
	{
		va_start(args, n);
		for (index = 0; index < n; index++)/*create a loop to add parameter*/
			sum += va_arg(args, int);
		va_end(args);
		return (sum);
	}
	return (0);
}
