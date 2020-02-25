#include "holberton.h"
/**
* set_string - function
* Description: a function that sets the value of a pointer to a char
* @s: target string
* @to: string to set with
* Return: nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
