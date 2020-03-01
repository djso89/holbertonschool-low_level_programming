#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
* main - Entry Point
* Description: a program that prints all the arguments it receives
* @argc: Number of arguments
* @argv: argument in string format
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int mult;
	int i;

	/**
	 * check if there is only one argument.
	 * 0 index being the name of program
	 * 1 index being just single number
	 */
	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		mult = 1;
		/*do the multiplications starting after the program name*/
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
