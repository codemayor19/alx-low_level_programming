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

	if (separator != NULL)
	{
		va_start(ptr, n);
		i = 0;
		while (i < n)
		{
			if (i == n - 1)
			{
				printf("%d\n", va_arg(ptr, int));
			} else
			{
				printf("%d%s", va_arg(ptr, int), separator);
			}
			i++;
		}
	}
	va_end(ptr);
}
