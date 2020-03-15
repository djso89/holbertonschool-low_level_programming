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

    #include "variadic_functions.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        print_numbers(", ", 4, 0, 98, -1024, 402);
        return (0);
    }

## [2. One woman's constant is another woman's variable](./2-print_strings.c)

> A funtion that prints strings, followed by a new line
> Separator is the string to be printed between the strings
> n is the number of strings passed to the function
> You are allowed to use printf
> If separator is NULL, don’t print it
> If one of the string is NULL, print (nil) instead
> Print a new line at the end of your function

*Test Code: 2-main.c*

    #include "variadic_functions.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        print_strings(", ", 2, "Jay", "Django");
        return (0);
    }

## [ 3. To be is a to be the value of a variable](./3-print_all.c)

> A function that prints anything
> format is a list of types of arguments passed to the function
>     c: char
>     i: integer
>     f: float
>     s: char * (if the string is NULL, print (nil) instead
>     any other char should be ignored
> for, goto, ternary operator, else, do..while are not allowed 
>     2 while loops and 2 ifs are maximum allowed
> maximum of 9 variables
> printf is permitted
> Print a new line at the end of your function

*Test Program: 3-main.c*

    #include "variadic_functions.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        print_all("ceis", 'H', 0, "lberton");
        return (0);
    }

## Author
*[Daniel So](http://github.com/djso89)*
