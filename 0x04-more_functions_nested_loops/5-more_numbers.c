#include "holberton.h"
/**
* more_numbers - function
* Description: print numbers 0-14 10 times followed by a new line
* Return: nothing
*/
void more_numbers(void)
{
	int i;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
