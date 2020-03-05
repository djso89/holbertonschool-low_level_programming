#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - function
* Description: a function that allocates memory
* @b: value to terminate with
* Return: a pointer to the memory
*/
void *malloc_checked(unsigned int b)
{
	void *memory_alloc;

	memory_alloc = malloc(b);
	if (memory_alloc == NULL)
	{
		exit(98);
	}
	return (memory_alloc);
}
