#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: count
 * @argv: array
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int c, u, result;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	result = 0;
	c = 1;
	while (c < argc)
	{
		u = 0;
		while (argv[c][u] != '\0')
		{
			if (argv[c][u] < '\0' || argv[c][u] > '9')
			{
				printf("Error\n");
				return (1);
			}
			u++;
		}
		result += atoi(argv[c]);
		c++;
	}
	printf("%d\n", result);
	return (0);
}
