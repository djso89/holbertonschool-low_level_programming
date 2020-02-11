#include "holberton.h"
/**
 * print_to_98 - function
 * Description: print up 98
 * @n: takes the integer number
 * Return: Value of last digit
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				_putchar('-');
				_putchar('0' + -i / 10);
				_putchar('0' + -i % 10);
			}
			if (i >= 0)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			if (i == 98)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 99)
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar('0' + i / 100);
				_putchar('0' + (i / 10) % 10);
				_putchar('0' + i % 10);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
				if (i == 98)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
