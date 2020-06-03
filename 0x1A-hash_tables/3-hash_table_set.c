#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - allocates a new node
 * @key: the key
 * @value: the value
 * Return: ptr to the node or NULL
 */
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	return (node);
}
/**
 * hash_table_set - function that adds an element to the table
 * @ht: the hash table to be updated
 * @key: key in string
 * @value: value associated with the key. can be empty string
 * Return: 1 if it succeeds. 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *head = NULL;
	unsigned long int index;
	char *new_value;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (!strcmp(key, head->key))
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(head->value);
			head->value = new_value;
			return (1);
		}
		head = head->next;
	}
	new = add_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
