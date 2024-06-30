#include "main.h"

/**
 * free_grid - frees the memory of a 2D grid.
 * @grid: The 2D array to be freed.
 * @height: The height of the 2D array.
 */
void free_grid(int **grid, int height)
{
	int r = 0;

	for (; r < height; r++)
		free(grid[r]);

	free(grid);
}
