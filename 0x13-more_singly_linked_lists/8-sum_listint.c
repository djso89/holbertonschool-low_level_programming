#include "lists.h"
/**
 * sum_listint - function
 * Description: a function that returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: top of the linked list
 * Return: sum of all the data (n) of a listint_t linked list. If the list is
 * empty, then returns 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int total;

	total = 0;
	temp = head;
	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
