#include "main.h"

/**
 * free_grid - Frees a 2D array previously created by alloc_grid
 *
 * @grid: Pointer to the 2D array
 * @height: The height of the grid
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
