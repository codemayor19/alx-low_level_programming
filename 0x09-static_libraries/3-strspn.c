#include "main.h"

/**
 * _strspn - string spn
 * @s: string
 * @accept: aceept
 *
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int amt;
	int i, j, k;

	amt = 0;
	i = 0;
	k = -1;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				amt += 1;
				break;
			}
			j++;
		}
		if (amt == k)
		{
			return (amt);
		}
		i++;
		k++;
	}
	return (amt);
}
