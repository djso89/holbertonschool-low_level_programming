#include <stdio.h>
/**
* main - Entry Point
* Description: a program that prints its name, followed by newline
* If program is renamed, it will print the new name without having to
* compile it again
* @argc: Number of arguments
* @argv: argument in string format
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
