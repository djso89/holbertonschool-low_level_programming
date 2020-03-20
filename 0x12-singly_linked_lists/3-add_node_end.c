#include "lists.h"
#include <string.h>
/**
* _strlen - function
* Description: swaps the values of two integers
* @s: char pointer
* Return: number of characters
*/
int _strlen(const char *s)
{
	int numchars;

	numchars = 0;
	while (*(s + numchars) != '\0')
	{
		numchars++;
	}
	return (numchars);
}
/**
 * add_node_end - function
 * Description: a function that adds new node at the end of a list_t
 * @head: pointer head
 * @str: string
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;

	end = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
	return (new);
}
