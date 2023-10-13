#include "variadic_functions.h"

/**
 * sum_them_all - addition
 * @n: first integer
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	va_start(ptr, n);
	i= 0;
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}
