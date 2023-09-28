#include "main.h"

/**
 * is_prime_number - prime number
 * @n: number
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, n - 1));
}
/**
 * check_prime - check prime
 * @n: intger
 * @a: intger
 *
 * Return: 0 or 1
 */
int check_prime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0 && a > 0)
	{
		return (0);
	}
	return (check_prime(n, a - 1));
}
