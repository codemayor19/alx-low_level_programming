#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	do {
		putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	putchar('\n');
	return (0);
}
