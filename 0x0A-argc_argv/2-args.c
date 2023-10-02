#include <stdio.h>

/**
 * main - entry
 * @argc: count
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
