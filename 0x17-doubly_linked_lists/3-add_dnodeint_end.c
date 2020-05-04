#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 * @head: address of the starting node
 * @n: integer to add
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	last = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (*head);
}
