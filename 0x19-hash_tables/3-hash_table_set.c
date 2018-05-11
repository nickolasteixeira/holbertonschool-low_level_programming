#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
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
	hash_node_t *head;
	const unsigned char *new_key = (const unsigned char *) key;

	index = key_index(new_key, ht->size);
	if (ht->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		if (new_node->key == NULL)
		{
			free(new_node)
			return (0);
		}
		new_node->value = strdup(value);
		if (new_node->value == NULL)
		{
			free(new_node);
			return (0);
		}
		new_node->next = NULL;
		ht->array[index] = new_node;
		printf("New Index: %lu\n", index);
		return (1);
	}

	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}
	
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	printf("Index: %lu\n", index);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
