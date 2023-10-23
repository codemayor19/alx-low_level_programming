#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: struct
 * @idx: index
 * @n: value
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int i;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		} else
		{
			 temp = temp->next;
		}
		i++;
	}
	return (NULL);
}
