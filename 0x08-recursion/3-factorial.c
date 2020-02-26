#include "holberton.h"
/**
* factorial - function
* Description: a function that returns the factorial of a given number
* @n: given integer number
* Return: length of s
*/
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
