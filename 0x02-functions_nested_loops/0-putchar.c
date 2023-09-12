#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char text[];
	int i;

	text = "_putchar";
	i = 0;
	while (i < 8)
	{
		_putchar('0' + text[i]);
	}
	_putchar('\n');
	return (0);
}
