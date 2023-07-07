#include "hash_tables.h"
/**
 * key_index - get index of a key.
 * @key: string key
 * @size: The size of the array
 * Return: index of a key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2(key);

	return (hash_key % size);
}
