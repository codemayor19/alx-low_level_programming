#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagsums
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int num_a, num_b;
	int i, j;

	i = 0;
	j = 0;
	while (i < size)
	{
		num_a += a[i * size + j];
		i++;
		j++;
	}
	i = 0;
	j = 0;
	while (i < size)
	{
		num_b += a[i * size + (size - j - 1)];
		i++;
		j++;
	}
	printf("%d, %d\n", num_a, num_b);
}
