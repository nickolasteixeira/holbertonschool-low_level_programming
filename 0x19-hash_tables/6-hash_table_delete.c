#include "hash_tables.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *runner, *temp;
	
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
