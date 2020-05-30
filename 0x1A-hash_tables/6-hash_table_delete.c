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

	if (ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			n = ht->array[i];
			while (n)
			{
				tmp = n;
				free(tmp->key);
				free(tmp->value);
				n = n->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
