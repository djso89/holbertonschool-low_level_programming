#include "3-calc.h"
/**
 * get_op_func - function
 * Description: a fucntion that selects the operation
 * @s: string to compare for operator
 * Return: a function that points to corresponding operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
