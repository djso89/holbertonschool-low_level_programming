# 0x0D. C - Preprocessor #

**0. Object-Like Macro**

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

**1. PI**

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

**2.File name**

> A Program that print the name of the file it was compiled from, followed
> by a new line.

**3.Function-like macro**

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
