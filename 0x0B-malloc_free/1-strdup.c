#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a copy of th string
 * @str: string value
 *
 * Return: string value
 */
char *_strdup(char *str)
{
	int size, i;
	char *ptrArray;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	if (size == 0)
	{
		return (NULL);
	}
	ptrArray = malloc(size * sizeof(char));
	if (ptrArray == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptrArray[i] = str[i];
		i++;
	}
	return (ptrArray);
}
