#include <unistd.h>
/**
* _abs - function
* Description: any negative number becomes positive
* @n: takes any integer number
* Return: number with no signs
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		return (n);
	}
	else
	{
		return (n);
	}
}
