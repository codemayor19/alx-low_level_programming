#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - string concat
 * @s1: string one
 * @s2: string two
 *
 * Return: string value
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i;
	char *ptrArray;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	ptrArray = malloc(((s2_len - 1) + (s1_len - 1)) * sizeof(char));
	if (ptrArray == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < s1_len)
	{
		ptrArray[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= s2_len)
	{
		ptrArray[s1_len + i] = s2[i];
		i++;
	}
	return (ptrArray);
}
/**
 * _strlen - check length
 * @str: string
 * Return: integer
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	if (*str == '\0' || str == NULL)
	{
		len++;
	} else
	{
		while (str[len] != '\0')
		{
			len++;
		}
	}
	return (len);
}
