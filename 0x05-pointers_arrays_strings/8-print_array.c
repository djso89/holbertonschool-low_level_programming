#include "holberton.h"
#include <stdio.h>
/**
* print_array - function
* Description: print n elements of an array of integer
* @a: int pointer
* @n: number of elements
* Return: nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
