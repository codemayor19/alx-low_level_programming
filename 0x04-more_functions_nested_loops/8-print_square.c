#include "main.h"

/**
 * print_square - print square
 * @size: value
 *
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
