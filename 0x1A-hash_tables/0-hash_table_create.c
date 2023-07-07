#include "hash_tables.h"

/**
 * hash_table_create - allocate memory for hash table
 * @size: The size of the array
 * Return: hash_table_t address or NULL if something wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hash_table;
	unsigned int i;

	if (size == 0)
		return (NULL);
	hash_table = malloc(sizeof(hash_table_t *));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * (size + 1));
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
