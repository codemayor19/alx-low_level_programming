#include "main.h"

/**
 * _strncat - concat n string
 * @dest: destination
 * @src: source
 * @n:number
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_len, s_len, i;

	d_len = 0;
	while (dest[d_len] != '\0')
	{
		d_len++;
	}
	s_len = 0;
	while (src[s_len] != '\0')
	{
		s_len++;
	}
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[d_len] = src[i];
		i++;
		d_len++;
	}
	dest[d_len] = '\0';
	return (dest);
}
