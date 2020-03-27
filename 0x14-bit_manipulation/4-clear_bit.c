#include "holberton.h"
/**
 * clear_bit - a function that sets the value of a  bit to 0 at
 * a given index
 * @n: long integer pointer
 * @index: bit number
 * Return: 1 if it works, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64 && n)
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
