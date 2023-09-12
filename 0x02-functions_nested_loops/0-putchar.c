#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;	
	char text[] = "_putchar";

	i = 0;
	while (i < 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
