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
* _strlen_recursion - function
* Description: a function that returns the length of the string
* @s: string to measure
* Return: length of s
*/
int _strlen_recursion(char *s)
{
	/*check if s string is at null byte*/
	if (!*s)
	{
		return (0);
	}
	/*if not, return 1 and go dive into function and add one*/
	/*this is synonymous to doing i++ when using while loop*/
	return (1 + _strlen_recursion(s + 1));
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

	s_len = _strlen_recursion(s);
	return (checkpal(s, 0, s_len - 1));
}
