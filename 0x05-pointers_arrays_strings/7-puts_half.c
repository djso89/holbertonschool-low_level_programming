#include "holberton.h"
/**
* puts_half - function
* Description: print the second half of string
* @str: char pointer
* Return: nothing
*/
void puts_half(char *str)
{
	int numchar;
	int i;

	numchar = 0;
	while (*(str + numchar) != '\0')
	{
		numchar++;
	}
	if (numchar % 2 == 0)
	{
		for (i = numchar / 2; i < numchar; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
	else
	{
		for (i = ((numchar - 1) / 2) + 1; i < numchar; i++)
		{
			_putchar(*(str + i));
		}
		_putchar('\n');
	}
}
