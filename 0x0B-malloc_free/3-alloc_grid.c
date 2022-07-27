#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: input width
 * @height: input height
 * Return: Returns a pointer
 */
int **alloc_grid(int width, int height)
{
	int **i;
	int m, n;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	i = malloc(height * sizeof(int));

	if (i == NULL)
	{
		free(i);
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		i[m] = malloc(width * sizeof(int));
		if (i == NULL)
		{
			free(i);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			i[m][n] = 0;
		}
	}
	return (i);
}
