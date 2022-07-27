#include "main.h"
#include <stdlib.h>

/**
 * free_grid - checks the code
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
	return;
}
