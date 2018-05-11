#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table the size of size
 * @size: size of the array
 *
 * Return: pointer to the hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		table->array[i] = NULL;
		++i;
	}
	return (table);
}
