#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - args to string
 * @ac: count
 * @av: string
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int count, i, j, k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	i = 0;
	count = 0;
	j = 0;
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
		j = 0;
		i++;
	}
	ptr = malloc((sizeof(char) * count) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j] != '\0')
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	ptr[k] = '\0';
	return (ptr);
}
