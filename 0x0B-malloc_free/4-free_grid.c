#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free memory
 * @grid: grid
 * @height: the row
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
