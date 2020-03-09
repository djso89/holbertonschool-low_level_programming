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
