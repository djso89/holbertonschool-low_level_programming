#include "holberton.h"
/**
 * print_binary - function that prints the binary representation of
 * number.
 * @n: integer in base 10
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0'); /*mask all the bits except the LSB*/
}
