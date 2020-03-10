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

