#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - function that creates hash_table
 * @size: size of an array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!(new->array))
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	new->size = size;
	return (new);
}
