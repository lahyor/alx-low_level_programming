#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the alloc_grid function
 * @grid: grid to be freed
 * @height: height of the grid
 * Return: Frees grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
