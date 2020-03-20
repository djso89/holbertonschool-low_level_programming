#include "lists.h"
/**
 * free_list - function
 * Description: a function that frees a list_t list
 * @head: head pointer to clear
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *delete;

	while (head)
	{
		delete = head->next;
		free(head->str);
		free(head);
		head = delete;
	}
}
