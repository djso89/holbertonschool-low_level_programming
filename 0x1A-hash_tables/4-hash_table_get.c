#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key in string
 * Return: the value associated with the element or NULL
 * if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_i;/*key index*/
	hash_node_t *tmp;

	if (!ht)
		return (NULL);
	k_i = key_index((const unsigned char *)key, ht->size);
	tmp = (ht->array[k_i]);

	if (!tmp)
		return (NULL);

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
