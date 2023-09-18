#include "main.h"
#include <stdio.h>

/**
 * print_array
 * @a: array values
 * @n: amt of elements
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		} else
		{
			printf(", %d", a[i]);
		}
		i++;
	}
	printf("\n");
}
