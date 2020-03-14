#include "variadic_functions.h"
/**
 * is_valid - function
 * Description: a function that checks if format string is valid
 * @fc: format character
 * Return: 1 if fc is c,s,f,i. Otherwise, 0
 */
int is_valid(const char fc)
{
	if (fc == 'c')
	{
		return (1);
	}
	if (fc == 's')
	{
		return (1);
	}
	if (fc == 'f')
	{
		return (1);
	}
	if (fc == 'i')
	{
		return (1);
	}
	return (0);
}
/**
 * print_all - function
 * @format: list of types of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list items;
	char *str;

	va_start(items, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(items, int));
			break;
		case 'i':
			printf("%i", va_arg(items, int));
			break;
		case 'f':
			printf("%f", va_arg(items, double));
			break;
		case 's':
			str = va_arg(items, char *);
			if (!str)
				printf("(nil)");
			printf("%s", str);
			break;
		}
		if (is_valid(format[i]) && format[i + 1])
			printf(", ");
		i++;
	}
	va_end(items);
	printf("\n");
}
