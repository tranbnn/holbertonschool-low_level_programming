#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to view
 * @key: the key to search for
 * Return: the associated value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
