#include "variadic_functions.h"
/**
 * print_all - function
 * @format: list of types of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, flag;
	va_list items;
	char *str;

	i = 0;
	while (format)
	{
		va_start(items, format);
		while (format[i])
		{
			flag = 1;
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
			default:
				flag = 0;
				break;
			}
			if (flag && format[i + 1] != '\0')
				printf(", ");
			i++;
		}
		va_end(items);
		break;
	}
	printf("\n");
}
