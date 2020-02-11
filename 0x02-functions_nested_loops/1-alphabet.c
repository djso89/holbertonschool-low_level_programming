#include "holberton.h"
/**
* print_alphabet - print out the alphabet a-z
* Description: anything
* Return: void (Success)
*/
void print_alphabet(void)
{
	char a;
	for (a = 'a' ; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
