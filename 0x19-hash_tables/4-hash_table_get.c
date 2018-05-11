#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
/**
 * hash_table_get - retreives a value associated with a key
 * @ht: hash table
 * @key: key value to look up
 *
 * Return: value associated with the element, NULL if key can't be
 * found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	/* find index position */
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
