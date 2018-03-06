#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts a new node in the linked list at
 * the idx position
 * @head: head of the linked list
 * @idx: the position to insert the new node
 * @n: the number to insert into the new node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy, *after;
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	counter = 0;
	copy = *head;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	while (counter < (idx - 1))
	{
		copy = copy->next;
		if (copy == NULL)
			return (NULL);
		++counter;
	}
	after = copy->next;
	copy->next = new;
	new->next = after;

	return (new);
}
