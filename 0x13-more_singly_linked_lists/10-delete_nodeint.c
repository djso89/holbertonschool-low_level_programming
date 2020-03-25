#include "lists.h"
/**
 * delete_nodeint_at_index - function
 * Description: function that deletes the node at index of
 * a listint_t linked list.
 * @head: starting point of linked list
 * @index: location
 * Return: 1 if it succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *d;
	listint_t *nxt;
	unsigned int pos;

	if (!(*head))
	{
		return (-1);
	}
	d = *head;

	if (index == 0)
	{
		*head = d->next;
		free(d);
		return (1);
	}

	for (pos = 0; d && pos < (index - 1); pos++)
	{
		d = d->next;
	}
	if (!d || !(d->next))
		return (-1);

	nxt = d->next->next;
	free(d->next);
	d->next = nxt;
	return (1);
}
