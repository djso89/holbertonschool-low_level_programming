#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry Point
* Description: print combinations of number 0-99
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;
	int num2;

	for (num = 0; num <= 99; num++)
	{
		for (num2 = num + 1; num2 <= 99 ; num2++)
		{
			/* print the first and last digits of num*/
			putchar('0' + num / 10);
			putchar('0' + num % 10);
			putchar(' ');
			/* print out the first and last digits of num2*/
			putchar('0' + num2 / 10);
			putchar('0' + num2 % 10);
			if (num != 98)
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
	return (0);
}
