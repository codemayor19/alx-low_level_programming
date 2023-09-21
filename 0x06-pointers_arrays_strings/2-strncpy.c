#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: number
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
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
		dest[i] = src[i];
		i++;
	}
	if (n > s_len)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
