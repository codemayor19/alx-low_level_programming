#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	i = 0;
	do {
		j = i + 1;
		do {
			k = j + 1;
			do {
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
					k++;
				} else 
				{
					putchar('\n');
					return (0);
				}
			} while (k <= 9);
			j++;
		} while (j <= 8);
		i++;
	} while (i <= 7);
	return (0);
}
