#include <stdio.h>

/**
 * main - entry thing
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	do {
		putchar(c);
		c--;
	} while (c >= 'a');
	putchar('\n');
	rturn (0);
}
