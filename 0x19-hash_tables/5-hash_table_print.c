#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints the entire hashed tabled
 * @ht: the pointer to the first element in the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *runner, *last_node;
	unsigned long int index, last_index;

	if (ht == NULL)
		return;

	last_index = (ht->size) - 1;
	while (last_index != 0)
	{
		last_node = ht->array[last_index];
		if (last_node)
			break;
		--last_index;
	}

	index = 0;
	printf("{");
	while (index < ht->size)
	{
		runner = ht->array[index];
		while (runner)
		{
			printf("'%s': '%s'", runner->key, runner->value);
			if (runner != last_node)
				printf(", ");
			runner = runner->next;
		}
		++index;
	}
	printf("}\n");
}
