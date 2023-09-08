#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, C;

	c = 'a';
	C = 'A';
	do {
		putchar(c);
		c++;
	} while (c <= 'z');
	do {
		putchar(C);
		C++;
	} while (C <= 'Z');
	putchar('\n');
	return (0);
}
