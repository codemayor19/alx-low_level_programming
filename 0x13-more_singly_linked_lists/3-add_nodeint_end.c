#include "lists.h"

/**
 * add_nodeint_end - add node to the end
 * @head: structure
 * @n: value intger
 * Return: address or Null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
