#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: a pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (table == NULL)
	{
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t) * size);

	return (table);
}
