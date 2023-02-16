#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char charType;
	int integerType;
	long int  longType;
	long long int ll;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int:	%lu byte(s)\n", (unsigned long)sizeof(integerType));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longType));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
	return (0);
}
