#include <unistd.h>
#include "holberton.h"
/**
* print_last_digit - function
* Description: print the last digit
* @n: takes the integer number
* Return: Value of last digit
*/
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		r = -1 * r;
		_putchar('0' + r);
		return (r);
	}
	else
	{
		_putchar('0' + r);
		return (n % 10);
	}
}
