#include "holberton.h"
/**
* _pow_recursion - function
* Description: a function that returns the value of x raised to the power of y
* @x: base integer
* @y: exponent
* Return: x^y if y is lower than 0, then return -1
*/
int _pow_recursion(int x, int y)
{
	/*when y is negative number*/
	if (y < 0)
	{
		return (-1);
	}
	/*when y is positive number*/
	if (y > 0)
	{
		/*dive into function itself again with decremented y*/
		return (x * _pow_recursion(x, y - 1));
	}
	/*if y = 0, return 1*/
	else
	{
		return (1);
	}
}
