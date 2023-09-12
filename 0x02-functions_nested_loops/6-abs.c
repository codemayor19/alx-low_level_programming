#include <stdio.h>
#include "main.h"

/**
 * _abs - absolute value of number
 * @n: varable
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return n;
}
