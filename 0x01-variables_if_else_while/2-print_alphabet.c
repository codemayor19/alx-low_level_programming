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
	while(alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar(alpha);
	putchar('\n');
	return (0);
}
