#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - array range
 * @min: minimum
 * @max: maximum
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int *ptr, i, j, size = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	j = min;
	while (j <= max)
	{
		*(ptr + i) = j;
		i++;
		j++;
	}
	return (ptr);
}
