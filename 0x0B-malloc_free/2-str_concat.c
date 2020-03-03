#include "holberton.h"
#include <stdlib.h>
/**
* str_concat - function
* Description: a function that concatenates two strings
* @s1: first string to concatenate with
* @s2: second string to concatenate with
* Return: pointer to the array, or null if fails
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1;
	int len2;
	int i;
	int j;

	len1 = 0;
	len2 = 0;
	while (*(s1 + len1))
	{
		len1++;
	}
	while (*(s2 + len2))
	{
		len2++;
	}
	str = malloc(((len1 + 1) * sizeof(char)) + ((len2 + 1) * sizeof(char)));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		str[j + i] = s2[j];
	}
	return (str);
}
