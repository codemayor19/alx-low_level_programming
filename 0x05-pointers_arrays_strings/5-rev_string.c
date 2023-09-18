#include "main.h"
#include  <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string value
 */
void rev_string(char *s)
{
	int i, j;
	char str;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (i = 0; i < j / 2; i++)
	{
		str = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = str;
	}

}
