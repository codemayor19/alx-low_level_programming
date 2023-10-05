#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * wordLen - returns index maring end of first word
 * @str: string
 *
 * Return: index
 */
int wordLen(char *str)
{
	int i, len;

	i = 0;
	len = 0;
	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * countWords - counts number of words containted in a string
 * @str: the string
 *
 * Return: integer
 */
int countWords(char *str)
{
	int i, wd, len;

	wd = 0;
	i = 0;
	len = 0;
	while (*(str + i))
	{
		len++;
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (*(str + i) != ' ')
		{
			wd++;
			i += wordLen(str + i);
		}
		i++;
	}
	return (wd);
}
/**
 * strtow - str row
 * @str: string
 *
 * Return: array or NULL
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, wd, w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wd = countWords(str);
	if (wd == 0)
	{
		return (NULL);
	}
	strings = malloc((wd + 1) * sizeof(char *));
	if (strings == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < wd; w++)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		letter = wordLen(str + i);
		strings[w] = malloc((letter + 1) * sizeof(char));
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(strings[w]);
			}
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letter; l++)
		{
			strings[w][l] = str[i++];
		}
		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
