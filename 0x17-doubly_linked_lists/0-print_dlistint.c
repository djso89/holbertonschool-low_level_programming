#include "lists.h"
/**
 * print_dlistint - a function that prints all elements of a
 * dlistint_t list
 * @h: head node of linked lists
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes;

	for (num_nodes = 0; h; num_nodes++, h = h->next)
	{
		printf("%d\n", h->n);
	}
	return (num_nodes);
}
