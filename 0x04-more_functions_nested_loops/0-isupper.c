#include "holberton.h"
/**
* _isupper - function
* Description: determine if character is uppercase or not
* @c: takes any character
* Return: 1 if character is uppercase 0 if lowercase
*/
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
