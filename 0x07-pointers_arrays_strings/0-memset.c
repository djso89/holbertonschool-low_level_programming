#include "holberton.h"
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
