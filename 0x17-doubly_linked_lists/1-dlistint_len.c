#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list
 * @h: head of the linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elmts;

	for (num_elmts = 0; h; h = h->next, num_elmts++)
		;
	return (num_elmts);
}
