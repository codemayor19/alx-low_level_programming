#include "lists.h"

/**
 * free_list - free
 * @head: list structure
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		free(head);
	else
	{
		tmp = head;
		if (tmp->next != NULL)
			free_list(tmp->next);
		free(tmp->str);
		free(tmp);
	}
}
