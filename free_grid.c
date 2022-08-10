#include "main.h"

/**
 * free_grid - free the allocated memory used in the last file
 * @grid: pointer to grid
 * @height: height of the grid
 */

void free_grid(char **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
}
