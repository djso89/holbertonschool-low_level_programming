#include "holberton.h"
/**
* rot13 - function
* Description: encrypt the string using rot13 method
* @str: char pointer
* Return: encrypted char pointer
*/
char *rot13(char *str)
{
	char *s;
	int i;

	char *letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *zeta = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	s = str;
	while (*str)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*str == letters[i])
			{
				*str = zeta[i];
			}
		}
		str++;
	}
	return (s);

}
