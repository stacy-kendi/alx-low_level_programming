#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up a 2d grid previously created by alloc_grid function
 * @grid: double pointer 2d grid
 * @height: height of grid
 * Return: A free 2d grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
