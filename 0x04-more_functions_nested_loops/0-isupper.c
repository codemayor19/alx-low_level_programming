#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks uppercase
 * @c: value
 *
 * Return: 1 if upper 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
