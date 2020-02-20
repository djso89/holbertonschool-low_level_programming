#include "holberton.h"
/**
* string_toupper - function
* Description: covert lowercase to uppercase
* @str: char pointer
* Return: char pointer
*/
char *string_toupper(char *str)
{
	int str_len;
	int i;

	i = 0;
	str_len = 0;
	/*get the length of str*/
	while (*(str + str_len))
	{
		str_len++;
	}
	for (i = 0; i < str_len; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - 32;
		}
	}
	return (str);
}
