#include "variadic_functions.h"
/**
 * is_valid - function
 * Description: a function that checks if format string is valid
 * @fc: format character
 * Return: 1 if fc is c,s,f,i. Otherwise, 0
 */
int is_valid(const char fc)
{
	switch (fc)
	{
	case 'c':
		return (1);
	case 'i':
		return (1);
	case 'f':
		return (1);
	case 's':
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
	unsigned int i;
	va_list items;
	char *str;

	i = 0;
	va_start(items, format);
	while (format && format[i])
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
				str = "(nil)";
			printf("%s", str);
			break;
		}
		if (is_valid(format[i]) && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(items);
}
