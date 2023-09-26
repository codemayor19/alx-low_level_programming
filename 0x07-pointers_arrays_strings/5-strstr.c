#include "main.h"

/**
 * _strstr - str tsr
 * @haystack: string value
 * @needle: string char
 *
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	k = 0;
	while (needle[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (haystack[j] != '\0' && k == i)
	{
		if (haystack[j] == needle[k])
		{
			k++;
		} else
		{
			k = 0;
		}
		j++;
	}
	if (k == i)
	{
		/* return ((haystack + j) - k);*/
		_putchar('h');
	}
	return (0);
}
