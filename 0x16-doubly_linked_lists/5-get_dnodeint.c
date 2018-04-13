#include "lists.h"
/**
 * get_dnodeint_at_index - returns a node at a given index
 * @head: head of the linked list
 * @index: index position of node to return
 *
 * Return: node at a given index position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copy;
	unsigned int count;

	if (head == NULL)
		return (head);

	count = 0;
	copy = head;
	while (copy)
	{
		if (count == index)
			return (copy);
		++count;
		copy = copy->next;
	}
	return (NULL);
}
