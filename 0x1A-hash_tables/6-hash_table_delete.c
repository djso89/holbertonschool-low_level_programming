#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - a function that deletes a
 * hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *n, *tmp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];
			while (n)
			{
				tmp = n->next;
				if (n->key)
					free(n->key);
				if (n->value)
					free(n->value);
				free(n);
				n = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
