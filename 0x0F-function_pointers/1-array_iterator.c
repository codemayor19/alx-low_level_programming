#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - array rntry
 * @array: array
 * @size: size
 * @action: fubction pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL  || action == NULL || size <= 0)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
