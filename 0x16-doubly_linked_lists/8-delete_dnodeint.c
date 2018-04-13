#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at an index position
 * @head: head of the linked list
 * @index: index position to delete the linked list
 *
 * Return: 1 if successfully deletes, -1 if doesn't
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy, *tmp;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	copy = *head;
	if (index == 0)
	{
		*head = copy->next;
		if (copy->next != NULL)
			copy->next->prev = NULL;
		free(copy);
		return (1);
	}

	count = 0;
	while (count < (index - 1))
	{
		if (copy == NULL)
			return (-1);
		++count;
		copy = copy->next;
	}

	tmp = copy->next->next;
	if (copy->next->next != NULL)
		copy->next->next->prev = copy;
	free(copy->next);
	copy->next = tmp;
	return (1);
}
