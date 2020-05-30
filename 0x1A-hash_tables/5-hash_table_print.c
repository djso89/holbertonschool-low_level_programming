#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *n;
	int comma = 0;

	if (!ht)
		return;

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			n = ht->array[i];
			while (n)
			{
				if (comma)
					printf(", ");
				printf("'%s': '%s'", n->key, n->value);
				comma = 1;
				n = n->next;
			}
		}
	}
	printf("}\n");
}
