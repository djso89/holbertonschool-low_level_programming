#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function
 * Description: a fucntion that creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 * Return: dog_t with copy of name and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int n_len;
	int o_len;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		return (NULL);
	}
	n_len = 0;
	o_len = 0;
	while (*(name + n_len))
		n_len++;
	while (*(owner + o_len))
		o_len++;
	n_dog->name = malloc(sizeof(char) * (n_len + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(sizeof(char) * (o_len + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; *name; i++, name++)
		n_dog->name[i] = *name;
	n_dog->name[i] = '\0';
	for (i = 0; *owner; i++, owner++)
		n_dog->owner[i] = *owner;
	n_dog->owner[i] = '\0';
	n_dog->age = age;
	return (n_dog);
}
