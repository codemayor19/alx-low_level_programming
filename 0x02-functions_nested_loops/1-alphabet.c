#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
