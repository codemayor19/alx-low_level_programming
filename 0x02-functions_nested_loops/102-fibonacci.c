#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 succes
 */
int main(void)
{
	int i;
	long j, k;

	i = 0;
	j = 1;
	k = 2;
	while (i < 50)
	{
		if (i == 0)
		{
			printf("%ld", j);
		} else if (i == 1)
		{
			printf(", %ld", j);
		} else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		i++;
	}
	printf("\n");
	return (0);
}
