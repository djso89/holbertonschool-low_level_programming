#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - function
* Description: a function that concatenates two strings
* @s1: first string to concat
* @s2: second string to concat
* @n: n bytes of s2
* Return: char pointer that point to newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int  s1_len, s2_len;
	char *nconcat;
	/*indexes*/
	unsigned int i1, i2;

	s1_len = 0;
	s2_len = 0;
	/*check if the null is passed*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*get the length of s1 and s2*/
	while (*(s1 + s1_len))
	{
		s1_len++;
	}
	while (*(s2 + s2_len))
	{
		s2_len++;
	}
	if (s2_len >= n)
		nconcat = malloc(sizeof(char) * (s1_len + s2_len + 1));
	else
		nconcat = malloc(sizeof(char) * (s1_len + n + 1));
	if (nconcat == NULL)
	{
		return (NULL);
	}
	for (i1 = 0; s1[i1]; i1++)
	{
		nconcat[i1] = s1[i1];
	}
	for (i2 = 0; s2[i2] && i2 < n; i2++, i1++)
	{
		nconcat[i1] = s2[i2];
	}
	nconcat[i1] = '\0';
	return (nconcat);
}
