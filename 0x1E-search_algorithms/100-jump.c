#include "search_algos.h"
#include <math.h>
/**
 * jump_search -  a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index where value is found
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t end = sqrt(size);
	size_t i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size && array[i] < value; i += end)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - end, i);

	for (i -= end; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
