#include "main.h"

/**
 * is_palindrome - palindrome
 * @s: string value
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len, i;

	i = 0;
	len = _strlen(s);
	return (palind(s, i, len));
}
/**
 * _strlen - check length
 * @s: string value
 *
 * Return: integer
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(++s));
}
/**
 * palind - check palindrome
 * @s: string value
 * @i: integer
 * @len: intger
 *
 * Return: 0 or 1
 */
int palind(char *s, int i, int len)
{
	if (s[i] != s[len - i - 1])
	{
		return (0);
	} else if (s[i] == '\0')
	{
		return (1);
	}
	i = i + 1;
	return (palind(s, i, len));
}
