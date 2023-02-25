#include <stdio.h>
/**
 * main - fxn that finds the largest prime factor of a num
 * Return: 0 (success)
 */
int main(void)
{
	long int num = 612852475143;
	long int factor = 2;

	while (factor * factor <= num)
	{
		if (num % factor == 0)
		{
			num = num / factor;
		}
		else
		{
			factor++;
		}
	}
	if (num > 2)
	{
		printf("Largest prime factor is %ld\n", num);
	}
	return (0);
}
