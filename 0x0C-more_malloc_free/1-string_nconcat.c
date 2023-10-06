#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concateate
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, i;
	char *ptr;

	s1_len = _strlen(s1);
	ptr = malloc(((s1_len + n) * sizeof(char)) + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i < s1_len)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	if (s2 == NULL)
	{
		ptr[s1_len + i] = '\0';
	} else
	{
		while (i < n && s2[i] != '\0')
		{
			ptr[s1_len + i] = s2[i];
			i++;
		}
		ptr[s1_len + i] = '\0';
	}
	return (ptr);
}
/**
 * _strlen - length
 * @str: string
 * Return: integer
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	len = 0;
	if (str == NULL)
	{
		len = 0;
	} else if (*str == '\0')
	{
		len = 0;
	} else
	{
		while (str[len] != '\0')
			len++;
	}
	return (len);
}
