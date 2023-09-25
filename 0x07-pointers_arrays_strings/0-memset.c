#include "main.h"

/**
 * _memset - memset
 * @: address
 * @b: char value
 * @n: integer
 *
 * Return: char value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
