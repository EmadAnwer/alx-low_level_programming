#include "hash_tables.h"

/**
 * hash_table_get - get value of a key in a hash table
 *
 * @ht: pointer to the hash table
 * @key: key of the node to update
 *
 * Return: string value on success, NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_index;
	hash_node_t *corrent;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	/*get index*/
	k_index = key_index((unsigned char *)key, ht->size);

	if (ht->array[k_index] == NULL)
		return (NULL);
	corrent = ht->array[k_index];

	while (corrent)
	{
		if (strcmp(ht->array[k_index]->key, key) == 0)

			return (ht->array[k_index]->value);

		corrent = corrent->next;
	}
	return (NULL);
}
