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
	dlistint_t *hold;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	hold = *head;

	for (i = 0; i < index; i++, hold = hold->next)
	{
		if (!hold)
			return (-1);
	}
	if (index == 0)
	{
		if (hold->next)
			hold->next->prev = NULL;
		*head = hold->next;
	}
	else
	{
		if (hold->next)
			hold->next->prev = hold->prev;
		if (hold->prev)
			hold->prev->next = hold->next;
	}
	free(hold);
	return (1);
}
