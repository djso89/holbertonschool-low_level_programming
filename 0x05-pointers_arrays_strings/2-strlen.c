/**
* _strlen - function
* Description: swaps the values of two integers
* @s: char pointer
* Return: number of characters
*/
int _strlen(char *s)
{
	int numchars;

	numchars = 0;
	while (*s != '\0')
	{
		s++;
		numchars++;
	}
	return (numchars);
}
