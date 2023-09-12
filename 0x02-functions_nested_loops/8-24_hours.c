#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - tell the time
 *
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	while (i <= 2)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					if (i == 2 && k > 3)
					{
						break;
					}
					putchar('0' + i);
					putchar('0' + j);
					putchar(':');
					putchar('0' + k);
					putchar('0' + l);
					putchar('\n');
					l++;
				}
				if (i == 2 && j > 3)
				{
					break;
				}
				k++;
			}
			if (i == 2 && j > 3)
			{
				break;
			}
			j++;
		}
		i++;
	}
}
