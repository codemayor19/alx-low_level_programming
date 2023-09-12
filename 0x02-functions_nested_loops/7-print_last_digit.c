#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: variable
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * -1;
		_putchar('0' + n);
		return (n);
	}
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
