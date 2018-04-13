#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the doubly linked list
 *
 * Return: number of nodes in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *copy;
	size_t count;

	count = 0, copy = h;

	if (h == NULL)
		return (count);

	while (copy)
	{
		++count;
		copy = copy->next;
	}
	return (count);
}
