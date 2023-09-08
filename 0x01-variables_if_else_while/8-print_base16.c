#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	char i;

	c = 0;
	i = 'a';
	do {
		putchar('0' + c);
		c++;
	} while (c <= 9);
	do {
		putchar(i);
		i++;
	} while (i <= 'f');
	putchar('\n');
	return (0);
}
