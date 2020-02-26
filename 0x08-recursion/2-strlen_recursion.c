#include "holberton.h"
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
