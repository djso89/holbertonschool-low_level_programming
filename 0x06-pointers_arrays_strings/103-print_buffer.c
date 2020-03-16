#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_buffer - function
* Description: compare the two string
* @b: buffer array
* @size: size of buffer
* Return: nothing
*/
void print_buffer(char *b, int size)
{
        int i;
	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", b[i]);
		i++;
	}
	printf("\n");
}
