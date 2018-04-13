#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a particular index
 * @h: head of the linked list
 * @idx: index to add the new node
 * @n: value to add to the new node
 *
 * Return: the new node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *copy;
	unsigned int count;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	/* link to insert is the head*/
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = (*h)->next;
		(*h)->next->prev = new;
		*h = new;
		return (new);
	}

	/* link to insert is NOT at head or tail */
	count = 0;
	copy = *h;
	while (copy)
	{
		if (count == idx)
		{
			copy->prev->next = new;
			new->prev = copy->prev;
			copy->prev = new;
			new->next = copy;
			return (new);
		}

		if (copy->next == NULL && ++count == idx)
		{
			copy->next = new;
			new->next = NULL;
			new->prev = copy;
			return (new);
		}
		++count;
		copy = copy->next;
	}

	return (NULL);
}
