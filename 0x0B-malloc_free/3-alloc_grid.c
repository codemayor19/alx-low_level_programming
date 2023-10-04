#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - grid
 * @width: columns
 * @height: rows
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(height * sizeof(int));
	i = 0;
	while (i < height)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		i++;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
