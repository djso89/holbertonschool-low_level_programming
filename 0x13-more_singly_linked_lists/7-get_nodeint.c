#include "lists.h"
/**
 * get_nodeint_at_index - function
 * Description: a function that returns the nth node of a listint_t linked list
 * @head: top of the linked list
 * @index: which linked list
 * Return: n(index)th node of a listsint_t list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *getnode;
	unsigned int i;

	getnode = head;
	i = 0;
	while (getnode)
	{
		if (i == index)
		{
			return (getnode);
		}
		i++;
		getnode = getnode->next;
	}
	return (NULL);
}
