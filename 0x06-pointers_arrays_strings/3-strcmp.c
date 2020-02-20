#include "holberton.h"
/**
* _strcmp - function
* Description: copy source char pointer to dest char up to n characters
* @s1: target char pointer
* @s2: another char pointer to compare
* Return: char pointer
*/
int _strcmp(char *s1, char *s2)
{
	/*run the loop as long as s1 is not \0*/
	while (*s1)
	{
		/*when s1 and s2 are not same, then break out of loop*/
		if (*s1 != *s2)
		{
			break;
		}
		/*increment the pointer to move on to next element*/
		s1++;
		s2++;
	}
	/*return the ascii difference*/
	return (*s1 - *s2);
}
