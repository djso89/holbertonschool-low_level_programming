#include "holberton.h"
/**
* _strpbrk - function
* Description: a function that search for a string of a set of bytes
* and it locates the first occurance in string s of any of the bytes
* in the string accept
* @s: string s
* @accept: string to compare for substring
* Return: a pointer to the first occurance of the character c in the string s
* or null if not found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
		i++;
	}
	return (0);
}
