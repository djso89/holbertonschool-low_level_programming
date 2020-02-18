#include "holberton.h"
#include <stdio.h>
/**
* _strcpy - function
* Description: print n elements of an array of integer
* @dest: target char pointer
* @src: source char pointer
* Return: char pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int numchar;

	numchar = 0;
	i = 0;

	while (*(src + numchar))
	{
		numchar++;
	}
	while (i <= numchar)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
