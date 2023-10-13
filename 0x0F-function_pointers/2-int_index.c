#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - int index
 * @array: array
 * @size: size
 * @cmp: function pointers
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, v;

	if (array == NULL || cmp == NULL)
		return (0);
	if (size <= 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		v = cmp(array[i]);
		if (v == 1)
			return (i);
		i++;
	}
	return (-1);
}
