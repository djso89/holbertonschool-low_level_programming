#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - function
* Description: a function that returns a pointer to a newly allocated space in
* memory, which contains a copy of the string given as a parameter
* @str: specific char to initialize with
* Return: pointer to the array, or null if fails
*/
char *_strdup(char *str)
{
	char *s;
	int len;
	int i;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + len))
	{
		len++;
	}

	s = malloc(sizeof(char) * len);

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
