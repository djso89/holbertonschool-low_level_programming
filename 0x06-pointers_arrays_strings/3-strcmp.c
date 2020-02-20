#include "holberton.h"
/**
* _strcmp - function
* Description: compare the two string
* @s1: target char pointer
* @s2: another char pointer to compare
* Return: 0 if s1 s2 are same; if not same, then return ascii diff of s1 and s2
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
