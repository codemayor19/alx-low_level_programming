#include "main.h"

/**
 * _strlen_recursion - string len recursion
 * @s: string value
 *
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
	{
		return (0);
	}
	return (i + _strlen_recursion(++s));
}
