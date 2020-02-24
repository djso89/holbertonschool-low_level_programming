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
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
/**
* _strspn - function
* Description: a function that gets the length of a prefix substring
* @s: string s
* @accept: string to compare for substring
* Return: number of bytes in the initial segment of s which consists
* only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, cnt;

	cnt = 0;
	while (*s && _strchr(accept, *(s++)))
	{
		cnt++;
	}
	return (cnt);
}
