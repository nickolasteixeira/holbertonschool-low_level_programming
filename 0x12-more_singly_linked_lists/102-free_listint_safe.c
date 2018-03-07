#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees all memory allocated to the linked list
 * @h: the head of the linked list
 *
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes, nodes_copy;
	listint_t *copy, *head_copy, *copy2;
	
	head_copy = *h;
	nodes = 0;
	
	while (head_copy != NULL)
	{
		++nodes;
		copy2 = head_copy;
		head_copy = copy2->next;
		free(copy2);

		nodes_copy = 0;
		copy = *h;
		while (nodes_copy < nodes)
		{
			if (head_copy == copy)
			{
				*h = NULL;
				return(nodes);
			}
			copy = copy->next;
			++nodes_copy;
		}
		
	}
	
	*h = NULL;
	return (nodes);	
}
