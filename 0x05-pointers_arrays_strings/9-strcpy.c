#include "main.h"

/**
 * _strcpy - copy function
 * @src: what tocopy
 * @dest: where to copy to
 *
 * Return: the value copied
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] <= '\0'; i++)
	{
	}
	j = 0;
	while (j < i)
	{
		*dest[j] = src[j];
		j++;
	}
	return *(dest);
}
