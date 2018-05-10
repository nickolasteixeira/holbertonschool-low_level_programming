#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_set - sets a value for a hash table
 * @ht: hash table
 * @key: key string to add
 * @value: value to add
 *
 * Return: 1 if successful, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	const unsigned char *new_key = (const unsigned char *) key;

	index = key_index(new_key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *) key;
	new_node->value = (char *) value;
	if (ht->array[index])
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}

	ht->array[index] = new_node;
	new_node->next = NULL;
	return (1);
}
