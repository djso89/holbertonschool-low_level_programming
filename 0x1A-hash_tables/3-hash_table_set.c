#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - function that adds an element to the table
 * @ht: the hash table to be updated
 * @key: key in string
 * @value: value associated with the key. can be empty string
 * Return: 1 if it succeeds. 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int h;
	hash_node_t *add;

	if (!key || !ht)
		return (0);

	h = key_index((const unsigned char *)key, ht->size);

	if (ht->array[h] && strcmp(ht->array[h]->key, key) == 0)
	{
		ht->array[h]->value = strdup(value);
		return (1);
	}
	add = malloc(sizeof(hash_node_t));
	if (!add)
		return (0);
	add->key = strdup(key);
	add->value = strdup(value);
	add->next = ht->array[h];
	ht->array[h] = add;

	return (1);
}
