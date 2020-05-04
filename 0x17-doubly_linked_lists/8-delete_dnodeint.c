#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index of a dlistint_t linked list
 * @head: address of the starting node of linked list
 * @index: given position
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hold, *d;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	hold = *head;
	if (index == 0)
	{
		d = *head;
		*head = (*head)->next;
		free(d);
		return (1);
	}
	for (i = 0; i < index - 1; i++, hold = hold->next)
	{
		if (!(hold->next))
		{
			hold->prev->next = NULL;
			free(hold);
			return (1);
		}
	}
	if (i != index - 1)
		return (-1);

	d = hold->next;
	hold->next = d->next;
	free(d);

	return (1);
}
