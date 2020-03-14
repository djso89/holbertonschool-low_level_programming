# 0x10. C - Variadic functions
## [0.Beauty is variable, ugliness is constant](./0-sum_them_all.c)

> A function that returns the
> sum of all its parameters. if n is 0, the function
> returns 0.

* Test Code: 0-main.c*

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
