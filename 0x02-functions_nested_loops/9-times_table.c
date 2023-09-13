#include <stdio.h>
#include "main.h"

/**
 * times_table - print 9 times table
 *
 */
void times_table(void)
{
	int i, j, n;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			n = i * j;
			if (j >= 9)
			{
				if (n >= 10)
				{
					_putchar('0' + n / 10);
					_putchar('0' + n % 10);
					_putchar(',');
					_putchar(' ');
				} else
				{
					_putchar('0' + n);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			} else
			{
				if (n >= 10)
				{
					_putchar('0' + n / 10);
					_putchar('0' + n % 10);
				} else
				{
					_putchar('0' + n);
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
