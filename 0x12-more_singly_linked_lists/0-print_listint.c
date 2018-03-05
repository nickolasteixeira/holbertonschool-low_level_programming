#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints integers in struct to console
 * @h: head of the linked list
 *
 * Return: number of structures (nodes) in linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	if (h == NULL)
		return ((size_t)NULL);

	nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		++nodes;
	}

	return (nodes);
}
