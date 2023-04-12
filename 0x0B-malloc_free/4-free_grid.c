#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the memory allocated to a 2-dimensional array or a grid.
 * @grid: The 2-dimensional array to be freed.
 * @height: The height of the grid.
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
