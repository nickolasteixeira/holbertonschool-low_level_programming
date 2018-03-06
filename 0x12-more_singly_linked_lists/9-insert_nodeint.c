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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	counter = 0;
	copy = *head;

	if (counter == idx)
	{
		new->n = n;
		new->next = copy->next;
		*head = new;
	}
	else
	{
		while (counter < (idx - 1))
		{
			copy = copy->next;
			if (copy == NULL)
			{
				free(new);
				return (NULL);
			}
			++counter;
		}

		after = copy->next;
		if (after == NULL && copy != NULL)
			new->next = NULL;
		else
			new->next = after;

		copy->next = new;
		new->n = n;

	}

	return (new);
}
