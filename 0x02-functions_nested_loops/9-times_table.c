#include "main.h"
/**
*times_table -> prints 9 times table
*/
void times_table(void)
{
	int multd, mult, prodt;

	for (multd = 0; multd < 10; multd++)
	{
		for (mult = 0; mult < 10; mult++)
		{
			prodt = multd * mult;
			if (mult == 0)
				_putchar(prodt + '0');
			if (mult != 0 && prodt < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prodt + '0');
			} else if (prodt >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prodt / 10) + '0');
				_putchar((prodt % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
