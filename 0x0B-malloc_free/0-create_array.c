#include "holberton.h"
#include <stdlib.h>
/**
* create_array - function
* Description: a function that creates an array of chars, and initialize it
* with a specific char
* @size: size of an array
* @c: specific char to initialize with
* Return: pointer to the array, or null if fails
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
