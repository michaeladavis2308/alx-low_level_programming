#include <stdio.h>
#include "main.h"
/**
 * main-prints the number of arguments passed into it.
 * @argc:counts no. of args passed
 * @argv:arguments passed
 * Return:0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
