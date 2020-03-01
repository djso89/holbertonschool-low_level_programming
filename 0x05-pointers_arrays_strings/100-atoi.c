#include "holberton.h"
/**
* _atoi - function
* Description: convert string into integer
* @s: string to convert
* Return: integer
*/
int _atoi(char *s)
{
	int i;
	int converted;

	i = 0;
	while (s[i])
	{
		converted = converted * 10 + s[i] - '0';
		i++;
	}
	return (converted);
}
