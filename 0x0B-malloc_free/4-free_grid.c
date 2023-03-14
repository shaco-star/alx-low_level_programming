#include <stdlib.h>

/**
 * free_grid - free 2D array memory
 *
 * @grid: 2D array
 * @height: number of rows
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

