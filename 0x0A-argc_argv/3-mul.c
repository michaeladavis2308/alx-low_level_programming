#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main-multiplies two numbers
 * @argv:a pointer to a pointer of an array of ints
 * @argc:counts the number of args
 * Return:1 if error / 0 when successful
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);
	}
	return (0);
}
