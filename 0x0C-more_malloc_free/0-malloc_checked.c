#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - malloc checked
 * @b: integer
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
