#include "holberton.h"
/**
* _puts - function
* Description: print out the arrays of char
* @str: char pointer
* Return: nothing
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*(str++));
	}
	_putchar('\n');
}
