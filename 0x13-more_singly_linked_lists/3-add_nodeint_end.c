#include "lists.h"
/**
 * add_nodeint_end -function
 * Description: a function that adds a new node at the end of a listint_t list
 * @head: starting pointer
 * @n: integer to add
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	end = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (end->next) /*traverse all the way down*/
		end = end->next;
	end->next = new; /*assign the end's next to new one*/
	return (new);
}
