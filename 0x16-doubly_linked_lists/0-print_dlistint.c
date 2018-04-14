#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list's value, returns
 * number of nodes
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes;
	const dlistint_t *copy;

	num_nodes = 0, copy = h;

	if (h == NULL)
		return (num_nodes);

	while (copy)
	{
		num_nodes += 1;
		printf("%d\n", copy->n);
		copy = copy->next;
	}
	return (num_nodes);
}
