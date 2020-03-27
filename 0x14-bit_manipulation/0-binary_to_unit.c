#include "holberton.h"
/**
* _strcpy - function
* Description: print n elements of an array of integer
* @dest: target char pointer
* @src: source char pointer
* Return: char pointer
*/
char *_strcpy(char *dest, const char *src)
{
	int i;
	int numchar;

	numchar = 0;
	i = 0;

	while (*(src + numchar))
	{
		numchar++;
	}
	while (i <= numchar)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
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
/**
* _pow_recursion - function
* Description: a function that returns the value of x raised to the power of y
* @x: base integer
* @y: exponent
* Return: x^y if y is lower than 0, then return -1
*/
int _pow_recursion(int x, int y)
{
	/*when y is negative number*/
	if (y < 0)
	{
		return (-1);
	}
	/*when y is positive number*/
	if (y > 0)
	{
		/*dive into function itself again with decremented y*/
		return (x * _pow_recursion(x, y - 1));
	}
	/*if y = 0, return 1*/
	else
	{
		return (1);
	}
}
/**
 * binary_to_uint - function
 * Description: a function that converts to binary to number
 * @b: binary string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	char *bin;
	unsigned int bin_len;
	unsigned int i;
	unsigned int num;

	num = 0;
	if (b == NULL)
		return (0);
	bin_len = 0;
	while (b[bin_len])
		bin_len++;
	bin = malloc(sizeof(char *) * (bin_len + 1));
	_strcpy(bin, b);
	rev_string(bin);

	for (i = 0; bin[i]; i++)
	{
		if (bin[i] == '1')
		{
			num = num + _pow_recursion(2, i);
		}
		else if (bin[i] == '0')
			continue;
		else
			return (0);
	}
	return (num);
}
