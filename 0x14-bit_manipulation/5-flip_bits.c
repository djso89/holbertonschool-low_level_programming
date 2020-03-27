#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits needed
 * to flip to get from one number to another
 * @n: number n
 * @m: number m
 * Return: the number of bits that needs to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fbits;
	unsigned long int k;

	fbits = 0;
	/* the xor is used so that two same bits can be avoided*/
	for (k = n ^ m; k != 0; k = (k >> 1))
	{
		fbits = fbits + (k & 1);
	}
	return (fbits);
}
