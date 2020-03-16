#include "holberton.h"
/**
* print_number - function
* Description: print the number
* @n: integer to print
* Return: nothing
*/
void print_number(int n)
{
	unsigned int k;
	/*check if n is negative*/
	if (n < 0)
	{
		_putchar('-');
		k = -n;
	}
	if (n >= 0)
	{
		k = n;
	}
	/*remove the last digit*/
	if (k / 10 > 0)
	{
		print_number(k / 10);
	}
	/*print the last digit*/
	_putchar(k % 10 + '0');
}
