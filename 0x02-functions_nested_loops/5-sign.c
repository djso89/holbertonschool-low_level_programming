#include "holberton.h"
/**
* print_sign - Entry Point
* Description: print the sign of number
* @n: takes the integer number
* Return: 1 for postive number, 0 for zero, -1 for negative number
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
