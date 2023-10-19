#include "lists.h"

/**
 * print_list - print list
 * @h: struct
 *
 * Return: length
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s", 0, "(nil)");
		 else
			printf("[%d] %s\n", h->len, h->str)
		i++;
		h = h->next;
	}
	return (i);
}
