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
	int c, result;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	result = 0;
	c = 1;
	while (c < argc)
	{
		if (atoi(argv[c]) >= 0 && atoi(argv[c]) <= 9)
		{
			result += atoi(argv[c]);
		} else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", result);
	return (0);
}
