#include "variadic_functions.h"
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
				printf("(nil)");
			printf("%s", str);
			break;
		}
		if ((formar[i] == 'c' || formar[i] == 's'
		     || formar[i] == 'i' || formar[i] == 'f')
		    && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(items);
}
