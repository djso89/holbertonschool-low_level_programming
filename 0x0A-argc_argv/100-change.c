#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry Point
* Description: a program that prints the minimum number of coins to make change
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int numcoins;
	int change;

	numcoins = 0;
	change = atoi(argv[argc - 1]);
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	while (change / 25 > 0)
	{
		numcoins++;
		change -= 25;
	}
	while (change / 10 > 0)
	{
		numcoins++;
		change -= 10;
	}
	while (change / 5 > 0)
	{
		numcoins++;
		change -= 5;
	}
	while(change / 2 > 0)
	{
		numcoins++;
		change -= 2;
	}
	while (change / 1 > 0)
	{
		numcoins++;
		change -= 1;
	}
	printf("%d\n", numcoins);
	return (0);
}
