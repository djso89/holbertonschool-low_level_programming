#include "variadic_functions.h"
/**
 * print_numbers - function
 * Description: a function that prints numbers followed by newline
 * @separator: string to be printed between numbers
 * @n: starting integer n
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_list;

	va_start(num_list, n);

	if (separator) /* if seperator is not null*/
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(num_list, int)); /*print number*/
			if (i != n - 1) /* check if it reaches last parameter*/
				printf("%s", separator);
		}
		va_end(num_list);
		printf("\n");
	}
}
