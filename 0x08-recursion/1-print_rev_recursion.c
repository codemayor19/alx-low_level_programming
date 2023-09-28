#include "main.h"

/**
 * _print_rev_recursion - reverse recursion
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		;
	} else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
