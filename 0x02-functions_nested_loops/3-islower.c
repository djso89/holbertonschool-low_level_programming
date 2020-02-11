#include <unistd.h>
/**
* _islower - Function
* Description: anything
* @c: takes the character
* Return: 1 is lowercase, 0 is not lowercase
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
