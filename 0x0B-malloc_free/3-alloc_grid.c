#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid- returns a pointer to a 2 dimensional array of int
 * @width:the columns of the 2D array
 * @height:the rows of the 2D array
 * Return:NULL on failure / pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int hgt_i, wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		grid[hgt_i] = malloc(sizeof(int) * width);

		if (grid[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(grid[hgt_i]);

			free(grid);
			return (NULL);
		}
	}

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			grid[hgt_i][wid_i] = 0;
	}

	return (grid);
}
