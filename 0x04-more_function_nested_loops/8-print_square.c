#include "holberton.h"
/**
* print_square - function
* Description: print square using #
* @size: size of square
* Return: nothing
*/
void print_square(int size)
{
	int x;
	int y;
	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
