#include "3-calc.h"
/**
* main - Entry Point
* Description: a program that performs following operations:
* +: addition
* -: subtraction
* *: multiplication
* /: division
* %: modulo
* @argc: argument counts
* @argv: arguments in string format
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int cal_result;

	cal_result = 0;
	if (argc <= 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	cal_result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", cal_result);

	return (0);
}
