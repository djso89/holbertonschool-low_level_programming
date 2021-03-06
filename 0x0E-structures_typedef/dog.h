#ifndef DOG_H
#define DOG_H
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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
