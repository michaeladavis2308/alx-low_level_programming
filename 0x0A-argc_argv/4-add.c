#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers.
 * @argc:counts the no. of args passed
 * @argv: a pointer to an array of int
 * Return:1 / 0
 */
int main(int argc, char **argv)
{
	int i, add = 0;

	if (argc < 1 && argc == 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
