#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Evaluates if a number is  postive/negative/zero.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("Your input doesn't comply with program rules");
	}
	return (0);
}
