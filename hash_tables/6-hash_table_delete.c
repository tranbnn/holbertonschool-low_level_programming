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

	if (ht == NULL)
	{
		return;
	}

	index = 0;
	
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			daum = node->next;
			free(node->value);
			free(node->key);
			free(node);
			
			if (daum != NULL)
			{
				node = daum;
			}
			else
			{
				break;
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
