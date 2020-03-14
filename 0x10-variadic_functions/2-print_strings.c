#include "variadic_functions.h"
/**
 * print_strings - funciton
 * Description: a fucntion that prints strings followed by new line
 * If the separator is null, the function does nothing
 * If one of the string is null, (nil) is printed instead
 * @separator: string to be printed in between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *tmp;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(strings, char *);
		if (tmp)
			printf("%s", tmp);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
