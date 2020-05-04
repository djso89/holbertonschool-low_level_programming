#include "lists.h"
/**
 * print_dlistint - a function that prints all elements of a
 * dlistint_t list
 * @h: head node of linked lists
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int num_nodes;
	/*move the header all the way down to first*/
	while (h->prev)
	{
		h = h->prev;
	}

	for (num_nodes = 0; h; h = h->next, num_nodes++)
	{
		printf("%d\n", h->n);
	}
	return (num_nodes);
}
