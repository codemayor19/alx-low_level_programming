#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i;
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	
	i = 0;

	while(sentence[i] !='\0')
	{
		putchar(sentence[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
