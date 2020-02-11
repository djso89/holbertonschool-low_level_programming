#include "holberton.h"
/**
* print_alphabet_x10 - Function
* Description: anything
* Return: Void
*/
void print_alphabet_x10(void)
{
	int times;
	char a;

	for (times = 0; times < 10; times++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
