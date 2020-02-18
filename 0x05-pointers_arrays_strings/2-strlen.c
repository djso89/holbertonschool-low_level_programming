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
	while (*(s + numchars) != '\0')
	{
		numchars++;
	}
	return (numchars);
}
