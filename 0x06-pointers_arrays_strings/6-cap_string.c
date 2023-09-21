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

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 10 && str[i] <= 11) || (str[i] >= 32 && str[i] <= 33))
		{
			if (num == 0)
			{
				num = 1;
			}
		} else if ((str[i] >= 40 && str[i] <= 41) || str[i] == 123 || str[i] == 125)
		{
			if (num == 0)
			{
				num = 1;
			}
		} else if (str[i] == 24 || str[i] == 63 || str[i] == 58)
		{
			if (num == 0)
			{
				num = 1;
			}
		} else if (str[i] == 44 || str[i] == 46)
		{
			if (num == 0)
			{
				num = 1;
			}
		} else if ((str[i] >= 97 && str[i] <= 122) && num == 1)
		{
			str[i] = *(str + i) - 32;
			num = 0;
		} else
		{
			continue;
		}
		i++;
	}
	return (str);
}
