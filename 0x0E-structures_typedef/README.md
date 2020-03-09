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

## 1. A dog is the only thing on Earth that loves you more than you love yourself ##

> A function that initialize a variable of type struct dog

*Test Program: 1-main.c*

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

        init_dog(&my_dog, "Django", 3.5, "Jay");
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
        return (0);
    }

## 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad ##

> A function that prints a struct dog

*Test Program: 2-main.c*

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
        my_dog.owner = Jay;

        print_dog(&my_dog);
        return (0);
    }

## 3. Outside of a dog, a book is a man's best friend. Inside of a dog, it's too dark to read ##

> Defining a new type dog_t as a new name for the type struct dog

*Struct dog as dog_t*

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

    typedef struct dog dog_t;
*Test Program: 3-main.c*

    #include <stdio.h>
    #include "dog.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        dog_t my_dog;

        my_dog.name = "Django";
        my_dog.age = 3.5;
        my_dog.owner = "Jay";
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
        return (0);
    }
## 4. A door is what a dog is perpetually on the wrong side of ##

> A function that creates a new dog. The function returns NULL if it fails

*Test Program: 4-main.c*

    #include <stdio.h>
    #include "dog.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        dog_t *my_dog;

        my_dog = new_dog("Django", 3.5, "Jay");
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
        return (0);
    }
## 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg ##

> A function that frees dogs
*Test Program: 5-main.c*

    #include <stdio.h>
    #include "dog.h"

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        dog_t *my_dog;

        my_dog = new_dog("Django", 3.5, "Jay");
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
        free_dog(my_dog);
        return (0);
    }
# Author #
## [Daniel So](http://github.com/djso89) ##
