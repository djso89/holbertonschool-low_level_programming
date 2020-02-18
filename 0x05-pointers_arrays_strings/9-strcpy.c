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

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
