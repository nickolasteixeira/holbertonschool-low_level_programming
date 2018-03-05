#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes nodes at specific indexes
 * @head: the head of the linked list
 * @index: the index node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy, *after, *free_node;
	unsigned int counter;

	if (*head == NULL)
		return (-1);

	counter = 0;
	copy = *head;
	if (counter == index)
	{
		*head = copy->next;
		free(copy);
	}
	else
	{
		while (counter < (index - 1))
		{
			copy = copy->next;
			if (copy == NULL)
				return (-1);
			++counter;
		}
		free_node = copy->next;
		after = (copy->next)->next;
		copy->next = after;
		free(free_node);
	}
	return (1);
}
