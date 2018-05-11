#include "hash_tables.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *runner;
	unsigned long int index;
	
	index = 0;
	printf("{");
	while(index < ht->size)
	{
		runner = ht->array[index];
		while(runner)
		{
			printf("'%s': '%s', ", runner->key, runner->value);
			runner = runner->next;
		}
		++index;
	}
	printf("}\n");
}
