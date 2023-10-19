#include "lists.h"

/**
 * print_list - print list
 * @h: struct
 *
 * Return: length
 */
size_t print_list(const list_t *h)
{
	int i = 0, j;
	char *_null = "(nil)";

	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			for (j = 0; _null[j] != '\0'; j++)
			{
				_putchar(_null[j]);
			}
		} else
		{
			_putchar('[');
			_putchar(h->len + '0');
			_putchar(']');
			_putchar(' ');
			for (j = 0; h->str[j] != '\0'; j++)
			{
				_putchar(h->str[j]);
			}
		}
		_putchar('\n');
		i++;
		h = h->next;
	}
	return (i);
}