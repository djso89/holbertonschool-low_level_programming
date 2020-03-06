#include <stdlib.h>
#include "holberton.h"
/**
* array_range - function
* Description: a function that allocates memory for an array using malloc
* The memory is set to zero
* @min: minimum number you want to start print from.
* @max: maximum number you want to print up to.
* Return: returns a pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	int elements;
	int *a_rng;
	int i;
/*check if min is greater than max*/
	if (min > max)
	{
		return (NULL);
	}
	/*count the number of elements*/
	elements = max - min;
	/*allocate the memeory in a_rng*/
	a_rng = malloc(elements * sizeof(int));
	if (a_rng == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < elements; i++)
	{
		if (min <= max)
		{
			a_rng[i] = min;
			min++;
		}
	}
	return (a_rng);
}
