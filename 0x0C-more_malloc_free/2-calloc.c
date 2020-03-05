#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _memset - function
* Description: a function that fills the first n bytes of the memory area point
* ed to by s with the constant byte b
* @s: integer pointer
* @b: number of elements of the array
* @n: bytes of the memory
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p;

	p = s;
	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
/**
* _calloc - function
* Description: a function that allocates memory for an array using malloc
* The memory is set to zero
* @nmemb: number of memory bytes
* @size: size of data type
* Return: returns pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/*check if nmemb or size is 0*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
