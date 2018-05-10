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
	hash_table_t *head;
	const unsigned char *new_key = (const unsigned char *) key;

	/* have to check if the key already exsits, if so, don't malloc 
	and change the value of the key */
	index = key_index(new_key, ht->size);
	/*
	if (key_exists(ht, key, index))
		change_value(ht, key, index)
	*/
	if (ht->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
		printf("New Index: %lu\n", index);
		return (1);
	}

	head = ht;
	while (head->array[index])
	{
		if (strcmp(head->array[index]->key, key) == 0)
		{
			head->array[index]->value = strdup(value);
			return (1);
		}
		head->array[index] = head->array[index]->next;
	}
	
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	printf("Index: %lu\n", index);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
