#include <unistd.h>
/**
* _isalpha - function
* Description: Checks whether character is letter, lowercase, or uppercase
* @c: takes the character
* Return: On Success: 1 for letter, 0 for not letter
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
