#include <stdlib.h>
#include "main.h"
/**
 * free_grid- frees the previous alloc_grid function
 * @grid:2D grid in memory to be freed
 * @height:row of 2D grid
 * Return:void
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
