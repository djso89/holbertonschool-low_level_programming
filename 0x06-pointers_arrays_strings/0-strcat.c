#include "holberton.h"
/**
* _strcat - function
* Description: print n elements of an array of integer
* @dest: string to append
* @src: string to be added to dest
* Return: char pointer
*/
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int src_len;

	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	for (src_len = 0; src[src_len] != '\0'; src_len++, dest_len++)
	{
		dest[dest_len] = src[src_len];
	}
	dest[dest_len] = '\0';

	return (dest);
}
