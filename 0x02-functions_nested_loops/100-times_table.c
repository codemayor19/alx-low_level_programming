#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print times table
 * @n: value
 *
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n < 15)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				k = j * i;
				if (k == 0)
				{
					if (j > 0)
					{
						printf(",   %d", k);
					} else
					{
						_putchar('0');
					}
				} else if (k >= 100)
				{
					printf(", %d", k);
				} else if (k >= 10)
				{
					printf(",  %d", k);
				} else
				{
					printf(",   %d", k);
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
