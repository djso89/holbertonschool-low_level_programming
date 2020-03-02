#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isInt - function
 * Description: a function that determines if string is number or not
 * @num: string to determine
 * Return: 1 is num string is integer otherwise 0
 */
int isInt(char *num)
{
	if (!*num || isspace(*num))
		return (0);
	char *temp;

	strtod(num, &temp);
	return (!*temp);
}
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
	int sum;

	sum = 0;
	for (i = 1; i <= argc - 1; i++)
	{
		if (isInt(argv[i]))
		{
			sum += atoi(argv[i]);
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
