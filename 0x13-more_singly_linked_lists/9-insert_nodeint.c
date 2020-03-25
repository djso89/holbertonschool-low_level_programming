#include "lists.h"
/**
 * insert_nodeint_at_index - function
 * Description: a function that inserts a new node at a given position
 * @head: top of the linked list
 * @idx: index position
 * @n: integer value to add
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *nextpos;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	nextpos = *head;
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = nextpos;
		*head = newNode;
		return (*head);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (nextpos == NULL)
		{
			return (NULL);
		}
		else
		{
			nextpos = nextpos->next;
		}
	}
	newNode->next = nextpos->next;
	nextpos->next = newNode;

	return (newNode);
}
