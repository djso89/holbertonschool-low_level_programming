#include "holberton.h"
/**
* _strstr - function
* Description: a function that locates a substring
* @haystack: string haystack
* @needle: string to compare to haystack for substring
* Return: a pointer to the beginning of the located substring, or null if not
* found
*/
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *term;

	while (*haystack)
	{
		start = haystack;
		term = needle;
		while (*haystack && *term && *haystack == *term)
		{
			haystack++;
			term++;
		}
		if (!*term)
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (0);
}
