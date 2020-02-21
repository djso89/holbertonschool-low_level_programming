#include "holberton.h"
/**
* cap_string - function
* Description: capitalize every word
* @s: char pointer
* Return: char pointer
*/
char *cap_string(char *s)
{
	char *c;
	char *delim = ", ;.!?(){}\"{}\n\t";
	int i;
	int j;

	i = 0;
	c = s;
	while (*(s + i))
	{
		if (i == 0)
		{
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
			{
				*(s + i) -= 32;
			}
		}
		for (j = 0; delim[j]; j++)
		{
			if (*(s + i) == delim[j])
			{
				if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
				{
					*(s + i + 1) -= 32;
				}
			}
		}
		i++;
	}
	return (c);
}
