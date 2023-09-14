#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if number
 * @c: value
 *
 * Return: 1 if number else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
