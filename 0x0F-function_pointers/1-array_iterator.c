#include "function_pointers.h"
/**
 * array_iterator - function
 * Description: a fucntion that prints the name using function pointer
 * @array: integer array
 * @size: size of the array
 * @action: function pointer that takes integer as parameter
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;
	if (array != NULL && action)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
