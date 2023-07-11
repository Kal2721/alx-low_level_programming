#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees the 2 dimensional grid
 * @grid: ...
 * @height: ...
 *
 * Return: ...
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
