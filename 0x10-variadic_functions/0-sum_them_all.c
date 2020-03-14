#include "variadic_functions.h"
/**
 * sum_them_all - function
 * Description: a funtion that adds all of its parameters
 * if n == 0, return 0
 * @n: first number to add
 * Return: summation of all the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	int sum;
	unsigned int i;

	sum = 0;
	va_start(num_list, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num_list, int);
	}
	va_end(num_list);

	return (sum);
}
