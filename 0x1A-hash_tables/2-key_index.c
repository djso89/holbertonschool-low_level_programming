#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 * @key: the key in string
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);

	return (i % size);
}
