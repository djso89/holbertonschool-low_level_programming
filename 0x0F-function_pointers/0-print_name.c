#include "function_pointers.h"
/**
 * print_name - function
 * Description: a fucntion that prints the name using function pointer
 * @name: name in string
 * @f: function pointer that takes sting
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
