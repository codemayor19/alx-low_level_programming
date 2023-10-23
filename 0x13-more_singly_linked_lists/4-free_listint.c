#include "lists.h"

/**
 * free_listint - free list struct
 * @head: first node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		free(head);
	else
	{
		if (head->next != NULL)
			free_listint(head->next);
		free(head);
	}
}
