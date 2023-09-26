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
	num_a = 0;
	num_b = 0;
	while (i < size)
	{
		num_a += a[i * size + i];
		i++;
	}
	j = size - 1;
	while (j >= 0)
	{
		num_b += a[j * size + (size - j - 1)];
		j--;
	}
	printf("%d, %d\n", num_a, num_b);
}
