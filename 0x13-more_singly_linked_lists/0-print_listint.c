#include "lists.h"
/**
 * print_listint - function
 * Description: a function that prints all the elements of a listint_t list
 * @h: head pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
