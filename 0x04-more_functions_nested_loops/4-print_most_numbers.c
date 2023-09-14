#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print most numbers
 *
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i != 4 && i != 2)
		{
			_putchar('0' + i);
		}
		i++;
	}
	_putchar('\n');
}
