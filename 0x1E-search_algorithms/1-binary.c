#include "search_algos.h"
/**
 * binary_search - a function that searches for a
 * value in a sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index where value is found
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t l, m, h;

	if (!array)
		return (-1);

	for (l = 0, h = size - 1; h >= l;)
	{
		printf("Searching in array: ");
		for (m = l; m < h; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = l + (h - l) / 2;

		if (array[m] == value)
			return (m);
		if (array[m] > value)
			h = m - 1;
		if (array[m] < value)
			l = m + 1;
	}
	return (-1);
}
