#include "main.h"

/**
 * print_triangle - print
 * @size: value
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		k = size - 1;
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				if (j < k)
				{
					_putchar(' ');
				} else
				{
					_putchar('#');
				}
				j++;
			}
			_putchar('\n');
			k--;
			i++;
		}
	} else
	{
		_putchar('\n');
	}
}
