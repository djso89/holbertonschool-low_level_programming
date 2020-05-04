#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - a function that inserts a new node at given
 * position
 * @h: starting point address of the linked list
 * @idx: index position
 * @n: integer n to add
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *hold;
	unsigned int i;

	if (!h || (!*h && idx > 0))
		return (NULL);
	hold = *h;
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		if (*h)
			hold->prev = new;
		*h = new;
		new->prev = NULL;
		new->next = hold;
		return (new);
	}
	for (i = 0; i < idx - 1; i++, hold = hold->next)
	{
		if (!hold)
		{
			free(new);
			return (NULL);
		}
	}
	new->prev = hold;
	new->next = hold->next;
	if (hold->next)
		hold->next->prev = new;
	hold->next = new;
	return (new);
}
