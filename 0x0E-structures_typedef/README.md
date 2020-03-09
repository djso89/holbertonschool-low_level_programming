# 0x0E. C - Structures, typedef #

## 0. Django ##

> Defining a new type struct dog with the following elements.
> 1. name, type = char *
> 2. age, type = float
> 3. owner, type = char *

*Structure of dog*

		/**
		* struct dog - Short Description
		* @name: name of dog in string
		* @age: age of dog in floating point
		* @owner: name of the owner in string
		*
		* Description: Longer description
		*/
		struct dog
		{
    	char *name;
    	float age;
    	char *owner;
		};
*Test Program: 0-main.c*

    #include <stdio.h>
    #include "dog.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        struct dog my_dog;

        my_dog.name = "Django";
        my_dog.age = 3.5;
        my_dog.owner = "Jay";
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
        return (0);
    }
