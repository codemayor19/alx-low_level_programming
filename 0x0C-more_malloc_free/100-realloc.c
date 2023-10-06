#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - real location
 * @ptr: pointer to memory
 * @old_size: int
 * @new_size: int
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;
	char *pt = ptr;

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
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	if (new_size > old_size)
	{
		i = 0;
		while (i < old_size)
		{
			p[i] = pt[i];
			i++;
		}
		free(ptr);
		return (p);
	}
	i = 0;
	while (i < new_size)
	{
		p[i] = pt[i];
		i++;
	}
	free(ptr);
	return (p);
}
