#include "lists.h"
/**
 * add_nodeint - function
 * Description: a function that adds a new node at the beginning of a listint_t
 * @head: start node
 * @n: integer to add
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
