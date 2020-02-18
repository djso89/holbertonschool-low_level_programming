#include "holberton.h"
/**
* print_rev - function
* Description: print out strings in reverse
* @s: char pointer
* Return: nothing
*/
void print_rev(char *s)
{
	int num;
	int i;

	/*count the number of strings*/
	while (*s != '\0')
	{
		s++;
		num++;
	}
	/*set the loop from 1 to number of characters*/
	for (i = 1; i <= num; i++)
	{
		_putchar(*(s - i));
	}
	_putchar('\n');
}
