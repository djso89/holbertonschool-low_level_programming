#include "holberton.h"
/**
* swap_int - function
* Description: swaps the values of two integers
* @a: integer pointer
* @b: other integer pointer to swap with
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
