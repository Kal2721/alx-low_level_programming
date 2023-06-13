#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: one dimension
 * @height: the other dimension
 *
 * Return: ...
 */
int **alloc_grid(int width, int height)
{
	int r, x, w, z;
	int **y;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	y = malloc(sizeof(int *) * height);

	if (y == NULL)
	{
		free(y);
		return (NULL);
	}

	for (r = 0; r < height; r++)
	{
		y[r] = malloc(sizeof(int) * width);

		if (y[r] == NULL)
		{
			for (x = r; x >= 0; x--)
			{
				free(y[x]);
			}

			free(y);
			return (NULL);
		}
		
	}

	for (w = 0; w < height; w++)
	{
		for (z = 0; z < width; z++)
		{
			y[w][z] = 0;
		}
	}
	return (y);
}

