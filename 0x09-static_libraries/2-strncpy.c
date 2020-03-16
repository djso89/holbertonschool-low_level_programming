#include "holberton.h"
/**
* _strncpy - function
* Description: copy source char pointer to dest char up to n characters
* @dest: target char pointer
* @src: source char pointer
* @n: n of characters in src up to n
* Return: char pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
