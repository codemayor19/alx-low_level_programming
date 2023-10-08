#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - real location
 * @ptr: pointer to memory
 * @old_size: int
 * @new_size: int
 *
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p, *pt = ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	} else if (ptr == NULL)
	{
		free(ptr);
		p = malloc(new_size);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}
		return (p);
	} else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = pt[i];
		free(ptr);
		return (p);
	}
	for (i = 0; i < new_size; i++)
	{
		p[i] = pt[i];
	};
	free(ptr);
	return (p);
}
