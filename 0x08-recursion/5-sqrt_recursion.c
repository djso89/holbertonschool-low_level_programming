#include "holberton.h"
/**
* checksquare - function
* Description: a helper function that returns the value of square root of x
* @i: integer to find the square of n
* @n: integer n to take square root with
* Return: square root of n, return -1 if n does not have natural square root
*/
int checksquare(int i, int n)
{
	int square;

	square = i * i;
	if (square > n)
	{
		return (-1);
	}
	if (square == n)
	{
		return (i);
	}
	return (checksquare(i + 1, n));
}
/**
* _sqrt_recursion - function
* Description: a function that returns the value of square root of x
* @n: integer to take square root with
* Return: square root of n, return -1 if n does not have natural square root
*/
int _sqrt_recursion(int n)
{
	return (checksquare(1, n));
}
