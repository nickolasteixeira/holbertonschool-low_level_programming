#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - delets the entire hash table
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *runner, *temp;

	if (ht == NULL)
		return;

	index = 0;
	while (index < ht->size)
	{
		runner = ht->array[index];
		while (runner)
		{
			temp = runner->next;
			free(runner->key);
			free(runner->value);
			free(runner);
			runner = temp;
		}
		++index;
	}
	free(ht->array);
	free(ht);
}
