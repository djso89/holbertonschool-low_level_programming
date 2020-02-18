#include "holberton.h"
/**
* puts2 - function
* Description: print every other character of a string
* @str: char pointer
* Return: nothing
*/
void puts2(char *str)
{
	/*string length as numchar*/
	int numchar;
	/*index of str pointer*/
	int i;

	numchar = 0;
	i = 0;
	/*count the length of str*/
	while (*(str + numchar) != '\0')
	{
		numchar++;
	}
	for (i = 0; i < numchar; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
