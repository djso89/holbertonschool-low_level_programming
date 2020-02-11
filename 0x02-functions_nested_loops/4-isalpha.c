#include <unistd.h>
/**
* islapha function
* @c: The charater to determine
*
* Return: 1 if c is a letter, lowercase or uppercase
*        0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
        if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
