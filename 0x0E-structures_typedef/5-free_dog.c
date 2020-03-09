#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - function
 * Description: a fucntion that frees dog
 * @d: dog_t d to free
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
