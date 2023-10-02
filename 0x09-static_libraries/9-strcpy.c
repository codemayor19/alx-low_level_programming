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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
