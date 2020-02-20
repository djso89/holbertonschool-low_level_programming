#include "holberton.h"
/**
* _strncat - function
* Description: print n elements of an array of integer
* @dest: target char pointer
* @src: source char pointer
* @n: append src up to n characters
* Return: char pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int src_len;
	int i;

	dest_len = 0;
	src_len = 0;
	/*get the length of destination*/
	while (dest[dest_len])
	{
		dest_len++;
	}
	/*get the length of source*/
	while (src[src_len])
	{
		src_len++;
	}
	/*append the source to destination*/
	for (i = 0; i < src_len && i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[i + dest_len] = '\0';

	return (dest);
}
