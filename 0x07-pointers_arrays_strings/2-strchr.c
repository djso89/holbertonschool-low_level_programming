#include "holberton.h"
/**
* _strchr - function
* Description: a function that locates the character c in the string s
* @s: string s
* @c: character to locate
* Return: a pointer to the first occurrence of the character c in string s
* or null if not found
*/
char *_strchr(char *s, char c)
{
	char *temp;

	temp = s;
	while (*temp)
	{
		if (*temp == c)
		{
			return (temp);
		}
		temp++;
	}
	return (temp);
}
