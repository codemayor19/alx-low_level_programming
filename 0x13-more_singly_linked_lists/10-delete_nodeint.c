#include "lists.h"

/**
 * delete_nodeint_at_index - delete node using index
 * @head: struct
 * @index: index
 * Return: 1 for success and -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
