# 0x10. C - Variadic functions
## [0.Beauty is variable, ugliness is constant](./0-sum_them_all.c)

> A function that returns the
> sum of all its parameters. if n is 0, the function
> returns 0.

*Test Code: 0-main.c*

        #include <stdio.h>
        #include "variadic_functions.h"

        /**
         * main - check the code for Holberton School students.
         *
         * Return: Always 0.
         */
        int main(void)
        {
        	int sum;

        	sum = sum_them_all(2, 98, 1024);
        	printf("%d\n", sum);
        	sum = sum_them_all(4, 98, 1024, 402, -1024);
        	printf("%d\n", sum);
        	return (0);
        }

## [1. To be is to be the value of a variable](./1-print_numbers.c)

> A function that prints numbers followed by new line
> separator is the string to be printed between numbers
> and n is the number of integers passed to the function
> printf is allowed
> If separator is NULL, don’t print it
> Print a new line at the end of your function

*Test Code: 1-main.c*
