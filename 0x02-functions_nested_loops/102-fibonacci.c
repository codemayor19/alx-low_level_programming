#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 succes
 */
int main(void)
{
	int i, old, new, hold;

	i = 0;
	old = 1;
	new = 1;
	while (i < 50)
	{
		if (i == 49)
		{
			printf("%d\n", new);
		} else
		{
			printf("%d, ", new);
			hold = new;
			new = old + new;
			old = hold;
		}
		i++;
	}
	return (0);
}
