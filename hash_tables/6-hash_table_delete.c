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

	index = 0;
	node = NULL;
	daum = NULL;
	
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node)
		{
			daum = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = daum;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
