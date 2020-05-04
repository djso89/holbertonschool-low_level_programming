#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - a function that free a dlistint_t list
 * @head: starting point of the double linked list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *del;
	dlistint_t *next;

	del = head;
	while (del)
	{
		next = del->next;
		free(del);
		del = next;
	}
}
