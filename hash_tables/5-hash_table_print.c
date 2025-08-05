#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int cheot;

	cheot = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	index = 0;

	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (cheot == 1)
			{
				printf("'%s': '%s'", node->key, node->value);
				cheot = 0;
			}
			else
			{
				printf(", '%s': '%s'", node->key, node->value);
			}
			node = node->next;
		}
		index++;
	}
	printf("}\n");
}
