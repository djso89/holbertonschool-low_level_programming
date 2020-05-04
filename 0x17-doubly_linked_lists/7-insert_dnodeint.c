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
		new->next = *h;
		*h = new;
		return (new);
	}
	for (i = 0; hold; i++, hold = hold->next)
	{
		if (i == idx)
		{
			new->next = hold->next;
			hold->next = new;
			new->prev = hold;
			return (new);
		}
	}

	return (NULL);
}
