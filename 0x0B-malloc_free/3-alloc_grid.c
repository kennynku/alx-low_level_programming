#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creeating a grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a 2 dimenational array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid, k, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(sizeof(int) * width);

		if (grid[k] == NULL)
		{
			while (k-- >= 0)
				free(grid[k]);
			free(grid);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
			grid[k][j] = 0;
	}

	return (grid);
}
