## 0x0D. C - Preprocessor ##

# [0. Object-Like Macro](./0-object_like_macro.h) #

> The header file that defines macro named SIZE as an abbreviation
> for the token 1024

*Test Program: 0-main.c*

    #include "0-object_like_macro.h"
	#include "0-object_like_macro.h"
	#include <stdio.h>
	/**
	* main - check the code for Holberton School students.
	*
	* Return: Always 0.
	*/
		int main(void)
		{
		int s;
		s = 98 + SIZE;
		printf("%d\n", s);
		return (0);
		}

# [1. PI](./1-pi.h) #

> The header file that defines PI macro as an abbreviation for the token
> 3.1459265359

*Test Program: 1-main.c*

    #include "1-pi.h"
    #include "1-pi.h"
    #include <stdio.h>

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        float a;
        float r;

        r = 98;
        a = PI * r * r;
        printf("%.3f\n", a);
        return (0);
    }

# [2.File name](./2-main.c) #

> A Program that print the name of the file it was compiled from, followed
> by a new line.

# [3.Function-like macro](./3-function_like_macro.h) #

> The header file that contains function-like macro ABS(x). This macro computes
> the absolute value of a number x.

*Test Program: 3-main.c*

    #include <stdio.h>
    #include "3-function_like_macro.h"
    #include "3-function_like_macro.h"
    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int i;
        int j;

        i = ABS(-98) * 10;
        j = ABS(98) * 10;
        printf("%d, %d\n", i, j);
        return (0);
    }

# [4.SUM](./4-sum.h) #

> The header file that contains function-like macro SUM(x, y).
> This macro computes the sum of the numbers x and y

*Test Program: 4-main.c*

    #include <stdio.h>
    #include "4-sum.h"
    #include "4-sum.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int s;

        s = SUM(98, 1024);
        printf("%d\n", s);
        return (0);
    }

## Author ##
[Daniel So](http://github.com/djso89)
