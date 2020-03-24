#include "lists.h"
/**
 * pop_listint - function
 * Description: function that deletes the head node of a listint_t linked list
 * @head: top of linked list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int number = 0;

	if (!(*head))
	{
		return (0);
	}
	number = (*head)->n;
	pop = *head;
	*head = (*head)->next;
	free(pop);
	return (number);
}
