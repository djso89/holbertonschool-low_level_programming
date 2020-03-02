#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * isInt - function
 * Description: a function that determines if string is number or not
 * @num: string to determine
 * Return: 1 is num string is integer otherwise 0
 */
int isInt(char *num)
{
	if (!*num || isspace(*num))
		return (0);
	char *temp;

	strtod(num, &temp);
	return (!*temp);
}
