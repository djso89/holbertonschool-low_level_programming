#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function
 * Description: print up 98
 * @n: takes the integer number
 * Return: Value of last digit
 */
void print_to_98(int n)
{
	int i;

	i = n;
	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", i);
}
