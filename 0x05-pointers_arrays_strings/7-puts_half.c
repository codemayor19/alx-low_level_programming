#include "main.h"

/**
 * puts_half - puts half
 * @str: string half
 */
void puts_half(char *str)
{
	long int i;
	long int j;
	long int n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
		while (n < i)
		{
			_putchar(str[n]);
			n++;
		}
	} else
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
