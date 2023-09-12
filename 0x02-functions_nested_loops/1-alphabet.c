#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * print_alphabet - Print alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet()
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
