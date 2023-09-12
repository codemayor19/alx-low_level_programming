#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if its an alphabet
 * @c: character to validate
 *
 * Return: 1 if alphabet 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && <= 122)
	{
		return (1);
	}
	return (0);
}
