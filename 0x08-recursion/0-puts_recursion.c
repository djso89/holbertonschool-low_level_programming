#include "holberton.h"
/**
* _puts_recursion - function
* Description: a function that prints the string and followed by newline
* @s: string to print
* Return: nothing
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*(s++));
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
