/**
* wildcmp - function
* Description: a function that compares two strings and determine if the
* string is considered as identical
* @s1: target string
* @s2: string to compared with. this string can contain special character
* "*"
* Return: 1 if string is considered identical, otherwise 0
*/
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
	{
		return (1);
	}
	if (*s2 == '*' && *(s2 + 1) && !*s1)
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}
