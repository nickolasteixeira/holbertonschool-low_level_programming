#include "lists.h"
/**
 * listint_len - returns the number of nodes in the
 * linked list
 * @h: head of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	if (h == NULL)
		return ((size_t)NULL);

	while (h != NULL)
	{
		++nodes;
		h = h->next;
	}

	return (nodes);
}
