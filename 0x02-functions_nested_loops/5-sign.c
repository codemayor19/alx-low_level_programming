#include <stdio.h>
#include "main.h"

/**
 * print_sign - validate if sign
 * @n: if number is positive or negative
 *
 * Return: 1 of number is positive
 * 0 if number is zero
 * -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	_putchar('1');
	return (-1);
}
