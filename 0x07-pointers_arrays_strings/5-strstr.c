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
	char *l, *P;

	for (; *haystack != '\0'; haystack++)
	{
		l = haystack;
		P = needle;
		while (*l == *P && *P != '\0')
		{
			l++;
			P++;
		}
		if (*P == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
