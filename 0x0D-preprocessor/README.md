# 0x0D. C - Preprocessor #

**0. Object-Like Macro**

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
