#include "lists.h"
/**
 * list_len - function
 * Description: A function that returns the number of elements in a linked list
 * @h: head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int nodes;

	for (nodes = 0; h; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
