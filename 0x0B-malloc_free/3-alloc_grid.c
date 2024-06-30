#include "main.h"

/**
 * alloc_grid - 2D array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 * Return: pointer to the 2D array, otherwise NULL if fails.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int r = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (; r < height; r++)
	{
		grid[r] = malloc(sizeof(int) * width);

		if (grid[r] == NULL)
		{
			for (j = 0; j < r; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[r][j] = 0;
	}

	return (grid);
}
