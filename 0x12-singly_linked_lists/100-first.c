#include <stdio.h>

void first_hare(void) __attribute__((constructor));
/**
 * first_hare - prints a fxns before the main fxn is executed.
 * Return: void
 */
void first_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
