#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - clear allocation
 * @nmemb: number of member
 * @size: size
 *
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		*(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
