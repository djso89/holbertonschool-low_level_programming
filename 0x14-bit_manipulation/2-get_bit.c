#include "holberton.h"
/**
 * get_bit - a function that returns the value of a bit
 * at a given index
 * @n: integer
 * @index: bit number
 * Return: the value of the bit at index or -1 if an error ocuured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
