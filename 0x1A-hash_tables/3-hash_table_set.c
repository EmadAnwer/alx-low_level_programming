#include "hash_tables.h"

/*prototypes*/
int add_node_to_hash_table(hash_table_t *ht, const char *key,
						   const char *value, unsigned long int k_index);
int update_value(hash_table_t *ht, const char *key,
				 const char *value, unsigned long int k_index);
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
	int v = 0;
	/*check validation*/
	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	/*get index*/
	k_index = key_index((unsigned char *)key, ht->size);
	v = update_value(ht, key, value, k_index);
	if (v == 0)
		v = add_node_to_hash_table(ht, key, value, k_index);

	return (v);
}

/**
 * add_node_to_hash_table - adds a node to a hash table
 *
 * @ht: pointer to the hash table
 * @key: key to add
 * @value: value to add
 * @k_index: index of the key in the hash table
 *
 * Return: 1 on success, 0 on failure
 */
int add_node_to_hash_table(hash_table_t *ht, const char *key,
						   const char *value, unsigned long int k_index)
{

	hash_node_t *h_node;
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

/**
 * update_value - updates the value of a node in a hash table
 *
 * @ht: pointer to the hash table
 * @key: key of the node to update
 * @value: new value to set
 * @k_index: index of the key in the hash table
 *
 * Return: 1 on success, 0 on failure
 */
int update_value(hash_table_t *ht, const char *key,
				 const char *value, unsigned long int k_index)
{
	hash_node_t *corrent;

	if (ht->array[k_index] == NULL)
		return (0);
	corrent = ht->array[k_index];

	while (corrent)
	{
		if (strcmp(ht->array[k_index]->key, key) == 0)
		{
			free(ht->array[k_index]->value);
			ht->array[k_index]->value = strdup(value);
			if (ht->array[k_index]->value == NULL)
				return (0);
			return (1);
		}
		corrent = corrent->next;
	}
	return (0);
}
