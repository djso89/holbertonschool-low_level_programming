#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - function
 * Description: a fucntion that adds two integers together
 * @a: integer a
 * @b: integer b
 * Return: (a + b)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function
 * Description: a fucntion that subtracts two integers together
 * @a: integer a
 * @b: integer b
 * Return: (a - b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function
 * Description: a fucntion that multiplies two integers together
 * @a: integer a
 * @b: integer b
 * Return: (a * b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function
 * Description: a fucntion that divides two integers together
 * @a: integer a
 * @b: integer b
 * Return: (a / b) if b is 0, it exits program with status 100
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function
 * Description: a fucntion that returns remainder of division of a by b
 * @a: integer a
 * @b: integer b
 * Return: (a % b)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
