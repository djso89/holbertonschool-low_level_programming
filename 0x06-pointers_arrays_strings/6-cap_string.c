#include "holberton.h"
/**
* cap_string - function
* Description: capitalize every word
* @s: char pointer
* Return: char pointer
*/
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == '\t')
		{
			*(s + i) = ' ';
		}
		if (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '.'
		   || *(s + i) == ',' || *(s + i) == ';' || *(s + i) == '!'
		   || *(s + i) == '"' || *(s + i) == '(' || *(s + i) == ')' ||
		   *(s + i) == '{' || *(s + i) == '}')
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
			{
				*(s + i + 1) = *(s + i + 1) - 32;
			}
		}
		i++;
	}
	return (s);
}
