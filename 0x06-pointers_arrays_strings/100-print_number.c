#include "holberton.h"
/**
* print_number - function
* Description: print the number
* @n: integer to print
* Return: nothing
*/
void print_number(int n)
{
	/*check if n is negative*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/*remove the last digit*/
	if (n / 10)
	{
		print_number(n / 10);
	}
	/*print the last digit*/
	_putchar(n % 10 + '0');
}
