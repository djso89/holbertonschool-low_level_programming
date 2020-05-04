#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - a function that adds a new node at
 * the beginning of a dlistint_t list
 * @head: address of the head node
 * @n: integer data to add
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (*head);
	}
	else
	{
		*head = new;
		return (*head);
	}
	return (NULL);
}
