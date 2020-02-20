#include "holberton.h"
/**
* reverse_array - function
* Description: reverse the integer array
* @a: integer pointer
* @n: number of elements of the array
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int *start;
	int *end;
	int temp;

	start = a;
	end = start + n - 1;
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
