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
			if (n == 0)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0');
				} else
				{
					_putchar('0');
				}
			} else if (n < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
