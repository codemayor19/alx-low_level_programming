#include "main.h"

/**
 * _strlen - return size of string
 * @s: string value
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
