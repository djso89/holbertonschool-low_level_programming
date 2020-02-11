#include "holberton.h"
/**
* times_table - function
* Description: print out multiplication table
* Return: none
*/
void times_table(void)
{
	int a;
	int b;
	int m;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
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
			if (b == 9)
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
