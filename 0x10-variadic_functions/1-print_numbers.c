#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: character seperating the numbers
 * @n: size
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ptr, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
