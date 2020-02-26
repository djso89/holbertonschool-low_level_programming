#include "holberton.h"
/**
* checkpal - function
* Description: a helper function that acts as loop
* @s: string to determine
* @i: index from start
* @j: index from the end
* Return: 1 if string is palindrome, otherwise 0
*/
int checkpal(char *s, int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	if (i < j + 1)
	{
		return (checkpal(s, i + 1, j - 1));
	}
	return (1);
}
/**
* is_palindrome - function
* Description: a function that checks if string is palindrome or not
* @s: integer to determine
* Return: 1 if string is palindrome, otherwise 0
*/
int is_palindrome(char *s)
{
	int s_len;

	s_len = 0;
	/*get the length of the s*/
	while (*(s + s_len))
	{
		s_len++;
	}
	return (checkpal(s, 0, s_len - 1));
}
