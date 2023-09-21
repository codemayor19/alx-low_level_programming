#include "main.h"

/**
 * reverse_array - reverse array
 * @a : array
 * @n: sizeof array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n;
	while (i <= n / 2)
	{
		temp = *(a + i);
		a[i] = *(a + (--j));
		a[j] = temp;
		i++;
	}
}
