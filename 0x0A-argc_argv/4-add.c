#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry Point
* Description: a program that prints all the arguments it receives
* @argc: Number of arguments
* @argv: argument in string format
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;
	int temp;
	char *yes;
	int sum;

	sum = 0;
	for (i = 1; i <= argc - 1; i++)
	{
		temp = strtol(argv[i], &yes, 10);
		if (*yes == '\0')
		{
			sum += temp;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
