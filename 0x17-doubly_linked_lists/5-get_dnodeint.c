#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list
 * @head: starting node of doubly linked list
 * @index: index of the node starting from 0
 * Return: nth node of dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	while (head->prev)
	{/*move the starting point all the way*/
		head = head->prev;
	}
	for (i = 0; head; i++, head = head->next)
	{
		if (i == index)
		{
			return (head);
		}
	}
	return (NULL);
}
