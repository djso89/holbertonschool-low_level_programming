#include <stdlib.h>
#include "holberton.h"
/**
* _realloc - function
* Description: a function that reallocates a memory block using malloc and free
* @ptr:the pointer to re-allocate
* @old_size: size of the allocated space for ptr
* @new_size: new size in bytes of the new memory block
* Return: returns a pointer to the newly created array.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ret_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ret_ptr = malloc(sizeof(char) * new_size);
	if (ret_ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < old_size; i++)
		{
			ret_ptr[i] = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (ret_ptr);
}
