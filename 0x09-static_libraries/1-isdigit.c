#include "holberton.h"
/**
* _isdigit - function
* Description: determine if character is digit or not
* @c: takes any character
* Return: number with no signs
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
