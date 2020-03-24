#include "lists.h"
/**
 * free_listint2 - function
 * Description: a function that frees a listint_t list and sets head to NULL
 * @head: start pointer
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *delete;

	while (*head)
	{
		delete = (*head)->next;
		free(*head);
		*head = delete;
	}
}
