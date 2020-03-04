#include "holberton.h"
#include <stdlib.h>
/**
* _strcat - function
* Description: concatenate dest and src together
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
/**
* _strlen - function
* Description: count how many characters in s string
* @s: char pointer
* Return: number of characters
*/
int _strlen(char *s)
{
	int numchars;

	numchars = 0;
	while (*(s + numchars) != '\0')
	{
		numchars++;
	}
	return (numchars);
}
/**
* argstostr - function
* Description: a function that concatenates all the arguments of the program
* @ac: number of arguments
* @av: arguments in string
* Return: 2-D array of integers
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int total_len, i;

	total_len = 0;
	/*check if ac is 0 and av is null*/
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*count the length of the each strings in av*/
	for (i = 0; i < ac; i++)
	{
		/*add all the length together and add one more for newline*/
		total_len = total_len + _strlen(av[i]) + 1;
	}
	/*memory allocate the str*/
	str = malloc((total_len * sizeof(char)) + 1);
	/*check if malloc failed*/
	if (str == NULL)
	{
		return (NULL);
	}
	/*concatenate the stings*/
	for (i = 0; i < ac; i++)
	{
		_strcat(str, av[i]);
		_strcat(str, "\n");
	}
	/*check if malloc failed*/
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
