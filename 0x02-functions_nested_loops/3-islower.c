#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: on 1 - lowercase 0 - uppercase
* On error, -1 is returned, and errno is set appropriately
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
