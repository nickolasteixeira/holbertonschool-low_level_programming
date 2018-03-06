#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints the linked list in a safe way, checks
 * for a infinite loop linked list
 * @head: head of the linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, nodes_copy;
	const listint_t *copy, *compare;

	copy = head;
	compare = head;
	nodes = 0;

	while (compare != NULL)
	{
		printf("[%p] %d\n", (void *)compare, compare->n);
		compare = compare->next;
		++nodes;

		nodes_copy = 0;
		copy = head;
		while (nodes_copy < nodes)
		{
			if (compare == copy)
			{
				printf("-> [%p] %d\n", (void *)copy, copy->n);
				return (nodes);
			}
			copy = copy->next;
			++nodes_copy;
		}
	}

	return (nodes);
}
