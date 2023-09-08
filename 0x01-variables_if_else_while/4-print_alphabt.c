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
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
			alpha++;
		} else
		{
			alpha++;
		}

	} while (alpha <= 'z');
	putchar('\n');
	return (0);
}
