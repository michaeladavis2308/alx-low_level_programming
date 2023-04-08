#include <stdio.h>
#include "main.h"
/**
 * main-prints all arguments it receives.
 * @argc:counts the no. of args passed
 * @argv:arguments passed
 * Return:0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
