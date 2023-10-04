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
	unsigned int s1_len, s2_len, i;
	char *ptrArray;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	ptrArray = malloc((((s2_len) + (s1_len)) * sizeof(char)) + 1);
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
	if (s2 == NULL)
	{
		ptrArray[s1_len + i] = '\0';
	} else
	{
		while (i < s2_len)
		{
			ptrArray[s1_len + i] = s2[i];
			i++;
		}
		ptrArray[s1_len + i] = '\0';
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
	if (str == NULL)
	{
		len = len;
	} else if (*str == '\0')
	{
		len = 0;
	} else
	{
		while (str[len] != '\0')
		{
			len++;
		}
	}
	return (len);
}
