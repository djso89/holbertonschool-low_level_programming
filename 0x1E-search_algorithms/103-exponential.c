#include "search_algos.h"
#include <sys/param.h>
/**
 * binarySearch - a function that searches recursively for a value in a sorted
 * array of integers using binary search algorithm
 * @array: pointer to the first element of the array to search
 * @l: lower bound of array
 * @r: higher bound of array
 * @x: value to search for
 * Return: index where value is found
 **/

int binarySearch(int *array, size_t l, size_t r, int x)
{
	size_t mid = l + (r - l) / 2;

	if (r >= l)
	{
		if (array[mid] == x)
			return (mid);

		if (array[mid] > x)
			return (binarySearch(array, l, mid - 1, x));

		return (binarySearch(array, mid + 1, r, x));
	}

	return (-1);
}

/**
 * exponential_search - a function that searches for a value in a sorted
 * array of integers using the exponential search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: value to search for
 * Return: index where value is found
 **/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t mini;

	if (!array || size == 0)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	while (i < size && array[i] <= value)
		i = i * 2;

	mini = i < size ? i : size;
	return (binarySearch(array, i / 2, mini, value));
}
