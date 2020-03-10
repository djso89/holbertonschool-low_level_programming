# 0x02. C - Functions, nested loops

## [0. _putchar](./0-holberton.c)

> A program that prints "holberton", followed by a new line just using _putchar
> function.

## [1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](./1-alphabet.c)

> A function that prints the alphabet in lowercase. Then, it prints new line

*Test Program: 1-main.c*

    #include "holberton.h"
    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        print_alphabet();
        return (0);
    }

## [2. 10 x alphabet](./2-print_alphabet_x10.c)

> A function that prints alphabets in lower case 10 times followed by new line

*Test Program: 2-main.c*

    #include "holberton.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        print_alphabet_x10();
        return (0);
	}

## [3.islower](./3-islower.c)

> A function that checks for lowercase character

*Test Program: 3-main.c*

    #include "holberton.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;

        r = _islower('H');
        _putchar(r + '0');
        r = _islower('o');
        _putchar(r + '0');
        r = _islower(108);
        _putchar(r + '0');
        _putchar('\n');
        return (0);
    }

## [4. isalpha](./4-isalpha.c)

> A function that checks for alphabetic character

*Test Program: 4-main.c*

    #include "holberton.h"
    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;

        r = _isalpha('H');
        _putchar(r + '0');
        r = _isalpha('o');
        _putchar(r + '0');
        r = _isalpha(108);
        _putchar(r + '0');
        r = _isalpha(';');
        _putchar(r + '0');
        _putchar('\n');
        return (0);
    }
## [5. Sign](./5-sign.c)

> A function that prints the sign of the number
>   * Prototype: int print_sign(int n);
>   * Returns 1 and prints + if n is greater than zero
>   * Returns 0 and prints 0 if n is zero
>   * Returns -1 and prints - if n is less than zero

*Test Program: 5-main.c*

    #include "holberton.h"
    /**
    * main - Entry Point
    * Description: testing print_sign funtion
    * Return: Always 0 (Success)
    */
    int main(void)
    {
    	int r;
    	r = print_sign(98);
    	_putchar(',');
    	_putchar(' ');
    	_putchar(r + '0');
    	_putchar('\n');
    	r = print_sign(0);
    	_putchar(',');
    	_putchar(' ');
    	_putchar(r + '0');
    	_putchar('\n');
    	r = print_sign(0xff);
    	_putchar(',');
    	_putchar(' ');
    	_putchar(r + '0');
    	_putchar('\n');
    	r = print_sign(-1);
    	_putchar(',');
    	_putchar(' ');
    	_putchar(r + '0');
    	_putchar('\n');
    	return (0);
    }

## [ 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you ](./6-abs.c)

> A function that computes the absolute value of integer

*Test Program: 6-main.c*

    #include "holberton.h"
    #include <stdio.h>

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;

        r = _abs(-1);
        printf("%d\n", r);
        r = _abs(0);
        printf("%d\n", r);
        r = _abs(1);
        printf("%d\n", r);
        r = _abs(-98);
        printf("%d\n", r);
        return (0);
    }

## [7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important](./7-print_last_digit.c)

>Write a function that prints the last digit of a number

*Test Program: 7-main.c*

    #include "holberton.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;

        print_last_digit(98);
        print_last_digit(0);
        r = print_last_digit(-1024);
        _putchar('0' + r);
        _putchar('\n');
        return (0);
    }

## [8. I'm federal agent Jack Bauer, and today is the longest day of my life](./8-24hours.c)

> A function that prints every minute of the day of Jack Bauer, starting from
> 00:00 to 23:59

    #include "holberton.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        jack_bauer();
        return (0);
    }

