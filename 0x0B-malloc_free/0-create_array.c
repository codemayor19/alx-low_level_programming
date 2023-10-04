#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create array of strings
 * @size: size of array
 * @c: character
 *
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	char *charArray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	charArray = malloc(size * sizeof(char));
	i = 0;
	while (i <= size)
	{
		charArray[i] = c;
		i++;
	}
	return (charArray);
}
