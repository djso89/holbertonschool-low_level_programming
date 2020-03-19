#include "lists.h"
/**
 * print_list - function
 * Description: a function that prints all the elements of a list_t list
 * @h: head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nodes;

	for (nodes = 0; h; nodes++)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}
	return (nodes);
}
