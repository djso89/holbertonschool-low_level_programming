#include "lists.h"
/**
 *
 *
 *
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
