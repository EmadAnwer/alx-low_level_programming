#include "hash_tables.h"
/**
 * hash_table_set - add item to hash table
 * @ht: hash table printer
 * @key: string key
 * @value: string value
 * Return: index of a key.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;
	hash_node_t *h_node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	/*allocat node*/
	h_node = malloc(sizeof(hash_node_t));
	if (h_node == NULL)
		return (0);

	h_node->key = strdup(key);
	if (h_node->key == NULL)
	{
		free(h_node);
		return (0);
	}
	h_node->value = strdup(value);
	if (h_node->value == NULL)
	{
		free(h_node->key);
		free(h_node);
		return (0);
	}

	/*get index*/
	k_index = key_index((unsigned char *)h_node->key, ht->size);

	if (ht->array[k_index])
	{
		h_node->next = ht->array[k_index];
		ht->array[k_index] = h_node;
	}
	else
	{
		ht->array[k_index] = h_node;
		h_node->next = NULL;
	}

	return (1);
}
