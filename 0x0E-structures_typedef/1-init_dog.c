#include "dog.h"
/**
 * init_dog - function
 * Description: a fucntion that initialize a variable of type struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
