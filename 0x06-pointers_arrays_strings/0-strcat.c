#include "main.h"

/**
 * _strcat - concatenate two string
 * @dest: destination
 * @src: source
 *
 * Return: dest value
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len, i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
