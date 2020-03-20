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
 * add_node - function
 * Description: a function that adds a new node at the beginning of
 * a list_t list
 * @head: head pointer
 * @str: string
 * Return: address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
