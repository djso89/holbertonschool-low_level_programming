#include "holberton.h"
/**
* rev_string - function
* Description: reverse the string
* @s: char pointer
* Return: nothing
*/
void rev_string(char *s)
{
	int numchar;
	char *start;
	char *end;
	char temp;

	start = s;
	numchar = 0;
	/*get the string length*/
	while (*(s + numchar) != '\0')
	{
		numchar++;
	}
	end = start + numchar - 1;
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
