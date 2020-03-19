#include "lists.h"
/**
 * print_list - funtion
 * Description: a function that prints all the elements of a list_t
 * @h: head list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;


        for(i = 0; h; i++)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next; /*point to next node*/
	}
	return (i);
}
