#include "holberton.h"
/**
* checkprime - function
* Description: a helper function that acts like a loop for is_prime_number
* @i: iterator
* @n: integer to determine
* Return: 1 if integer is prime number, otherwise 0
*/
int checkprime(int i, int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (checkprime(i + 1, n));
}
/**
* is_prime_number - function
* Description: a function that checks if n is prime number
* @n: integer to determine
* Return: 1 if integer is prime number, otherwise 0
*/
int is_prime_number(int n)
{
	return (checkprime(2, n));
}
