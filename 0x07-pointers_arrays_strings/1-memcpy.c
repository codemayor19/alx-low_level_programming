#include "main.h"

/**
 * _memcpy - copy memery
 * @dest: memory area
 * @src: memory area
 * @n: integer value
 *
 * Return: string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
