#include <stdio.h>
/**
 * main- prints 10 digits of the base 10
 * Return: Always 0 (success).
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
