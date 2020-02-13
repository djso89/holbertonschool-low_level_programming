#include "holberton.h"
/**
* print_times_table - function
* Description: print out multiplication table by n x n
* Return: none
*/
void print_times_table(int n)
{
	int a;
	int b;
	int m;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			m = a * b;
			if (m < 10)
			{
				_putchar('0' + m);
			}
			if (m >= 10)
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			if (m >= 100)
			{
				_putchar('0' + m / 100);
				_putchar('0' + (m /10) % 10);
				_putchar('0' + m % 10);
			}
			if (b == n)
			{
				_putchar ('\n');
			}
			else
			{
				if ((a * (b + 1)) < 10)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
				else
				{
					_putchar (',');
					_putchar (' ');
				}
			}
		}
	}
}
