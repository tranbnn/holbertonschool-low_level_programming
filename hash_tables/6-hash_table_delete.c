#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *daum;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			daum = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = daum;
		}
	}
	free(ht->array);
	free(ht);
}
