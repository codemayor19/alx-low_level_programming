#include "main.h"

/**
 * _sqrt_recursion - square root
 * @n: intger
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int a;

	a = 1;
	return (sqrt_fun(n, a));
}
/**
 * sqrt_fun - sqrt-fun
 * @n: intger
 * @sq: integer
 *
 * Return: intger
 */
int sqrt_fun(int n, int sq)
{
	if (sq * sq == n)
	{
		return (sq);
	} else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	return (-1);
}
