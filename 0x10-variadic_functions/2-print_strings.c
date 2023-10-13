#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: separate characters
 * @n: size
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", str);
		}
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ptr);
}
