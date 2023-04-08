#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked- allocates memory using malloc.
 * @b:number of bytes to be allocated
 * Return:void/pointer to the address of the mem allocated.
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
