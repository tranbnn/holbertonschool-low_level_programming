#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the table where location key is
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if success, 0 if otherwise.
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *head;
	unsigned long int index;

	if (ht == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup (value);
	node->next =NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node; 
	}
	else
	{
		head = ht->array[index];
		if (strcmp(key, head->key) == 0)
		{
			head->value = strdup(value);
		}
		else
		{
			node->next = head;
			ht->array[index] = node;
		}

	}
	return (1);
}
