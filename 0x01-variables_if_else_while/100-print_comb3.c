#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c, i;

	c = 0;
	do {
		i = c + 1;
		do {
			putchar('0' + c);
			putchar('0' + i);
			if (c != 8)
			{
				putchar(',');
				putchar(' ');
				i++;
			}
		} while (i <= 9);
		c++;
	} while (c <= 8);
	putchar('\n');
	return (0);
}
