#include <stdio.h>
/**
* main - Entry Point
* Description: a program that prints the number of arguments passed into it.
* @argc: Number of arguments
* @argv: argument in string format
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
