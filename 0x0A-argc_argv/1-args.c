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
	if (*argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
