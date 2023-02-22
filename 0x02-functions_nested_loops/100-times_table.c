#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int mult, multd, prodt;

	if (n >= 0 && n <= 15)
	{
		for (mult = 0; mult <= n; mult++)
		{
			for (multd = 0; multd <= n; multd++)
			{
				prodt = multd * mult;
				if (multd == 0)
				{
					_putchar(prodt + '0');
				} else if (prodt < 10 && multd != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prodt + '0');
				} else if (prodt >= 10 && prodt < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prodt / 10) + '0');
					_putchar((prodt % 10) + '0');
				} else if (prodt >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((prodt / 100) + '0');
					_putchar(((prodt / 10) % 10) + '0');
					_putchar((prodt % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
