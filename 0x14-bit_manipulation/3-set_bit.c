#include "holberton.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at given index
 * @n: integer pointer
 * @index: bit number
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index < 64)
	{
		*n |= (1 << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
