#include "holberton.h"
/**
* _memcpy - function
* Description: a function that copies memory area
* @dest: integer pointer
* @src: number of elements of the array
* @n: bytes of the memory
* Return: a pointer to the memory area s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p;

	p = dest;
	while (n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	return (dest);
}
