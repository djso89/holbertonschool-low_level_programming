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
	int l = 0, h = size - -1;
	int m = 0;
	int j = 0;

	if (!array)
		return (-1);

	for (; l <= h;)
	{
		printf("Searching in array: ");
		for (j = l; j <= h; j++)
		{
			printf("%d", array[j]);
			if (j == h)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}

		m = (h + l) / 2;

		if (array[m] == value)
		{
			return (m);
		}
		else if (value < array[m])
		{
			h = array[m - 1];
		}
		else
		{
			l = array[m + 1];
		}
	}
	return (-1);
}
