#include "main.h"

/**
 * cap_string - capitalize
 * @str: string
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i, num;
	int count = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (str[i] != '\0')
	{
		num = 0;
		while (num < count)
		{
			if ((i == 0 || str[i - 1] == spc[num]) && (str[i] >= 97 && str[i] <= 122))
			{
				str[i] -= 32;
			}
			num++;
		}
		i++;
	}
	return (str);
}
