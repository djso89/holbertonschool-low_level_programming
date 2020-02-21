#include "holberton.h"
/**
* leet - function
* Description: a as 4, e as 3, o as 0 , t as 7 m l as 1, and not case sensitive
* @str: char pointer
* Return: char pointer
*/
char *leet(char *str)
{
	char *s;
	int i;

	s = str;
	i = 0;

	char *letters = "aeotl";
	char *nums = "43071";

	while (*str)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*str == letters[i] || *str == letters[i] - 32)
			{
				*str = nums[i];
			}
		}
		str++;
	}
	return (s);
}
