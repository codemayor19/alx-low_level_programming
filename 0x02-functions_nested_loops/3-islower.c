#include <stdio.h>
#include "main.h"

/**
 * _islower - check if number is lowercase
 * @c: Asccii valuetobe checked
 *
 * Return: 0 for false 1 for true
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
