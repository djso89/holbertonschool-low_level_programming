#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - different 3 digit combo
* Description: print a-z in reverse
* Return: Always 0 (Success)
*/
int main(void)
{
	int f_digit;
	int s_digit;
	int t_digit;

	for (f_digit = 0; f_digit <= 9; f_digit++)
	{
		for (s_digit = f_digit + 1; s_digit <= 9; s_digit++)
		{
			for (t_digit = s_digit + 1; t_digit <= 9; t_digit++)
			{
				putchar('0' + f_digit);
				putchar('0' + s_digit);
				putchar('0' + t_digit);
				if (f_digit + 2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}
		}
	}
	return (0);
}
