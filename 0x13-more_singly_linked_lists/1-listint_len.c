#include "lists.h"
/**
 * listint_len - function
 * Description: a function that returns the number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elements;

	for (elements = 0; h; elements++)
	{
		h = h->next;
	}
	return (elements);
}
