#include "variadic_functions.h"
/**
 * print_numbers - function
 * Description: a function that prints numbers followed by newline
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_list;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_list, int)); /*print number*/
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(num_list);
	printf("\n");
}
