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
	size_t begin = 0;
	size_t end = sqrt(size);
	size_t i = 0;

	while (array[end] <= value && end < size)
	{
		begin = end;
		end += sqrt(size);
		if (end > size -1)
			end = size;
	}

	for (i = begin; i < end; i++)
	{
		if (array[i] == value)
			return i;
	}
	return -1;
}
