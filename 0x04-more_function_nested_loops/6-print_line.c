#include "holberton.h"
/**
* print_line - function
* Description: print _ n times
* @n: number of times _ to be printed
* Return: nothing
*/
void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
