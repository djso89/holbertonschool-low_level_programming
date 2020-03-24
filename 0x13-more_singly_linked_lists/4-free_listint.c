#include "lists.h"
/**
 * free_listint - function
 * Description: function that frees a listint_t list.
 * @head: start pointer
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *delete;

	while (head)
	{
		delete = head->next;
		free(head);
		head = delete;
	}
}
