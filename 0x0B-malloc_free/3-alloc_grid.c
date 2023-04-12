#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2-dimensional array, also known as a grid, by using
 * nested loops to allocate memory for the given width and height inputs.
 * @width: The width of the grid.
 * @height: The height of the grid.
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **ccc;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	ccc = malloc(sizeof(int *) * height);

	if (ccc == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ccc[a] = malloc(sizeof(int) * width);

		if (ccc[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ccc[a]);

			free(ccc);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ccc[a][b] = 0;
	}

	return (ccc);
}
