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
		c++;
	} while (c <= 9);
	putchar('\n');
	return (0);
}
