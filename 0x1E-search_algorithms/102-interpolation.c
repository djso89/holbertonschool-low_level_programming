#include "search_algos.h"
#include <stdbool.h>
/**
 * interpolation_search - a function that searches for a value in a sorted
 * array of integers using the interpolation search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index where value is found
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;
	int ahl;

	bool arhl = (array[high] != array[low]) ? true : false;

	while (arhl && (value >= array[low]) && (value <= array[high]))
	{
		ahl = (array[high] - array[low]);
		mid = low + ((value - array[low]) * (high - low) / ahl);
		printf("Value checked array[%lu] = %d\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);
	else
		return (-1);
}
