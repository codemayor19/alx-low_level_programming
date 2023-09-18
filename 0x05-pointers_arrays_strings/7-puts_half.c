#include "main.h"

/**
 * puts_half - puts half
 * @str: string half
 */
void puts_half(char *str)
{
	long int i;
	long int j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
