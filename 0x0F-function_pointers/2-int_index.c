#include "function_pointers.h"
/**
 * int_index - function
 * Description: a fucntion that searches for an integer
 * @array: integer array
 * @size: size of the array
 * @cmp: comparison function that takes integer as parameter
 * Return: index of the first element for which the cmp does return 0
 * if no element matches, return -1
 * if size <=0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL)
	{
		if (cmp)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
