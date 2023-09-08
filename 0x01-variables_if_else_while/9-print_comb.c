#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;
	do {
		putchar('0' + c);
		if (c == 9)
		{
			return (0);
		} else
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	} while (c <= 9);
	putchar('\n');
	return (0);
}
