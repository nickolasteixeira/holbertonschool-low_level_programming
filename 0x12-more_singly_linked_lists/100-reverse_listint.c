#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses a linked list in memory
 * @head: head to the linked list
 *
 * Return: head for the linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *copy, *head_copy;

	if (head == NULL)
		return (NULL);

	head_copy = NULL;
	while (*head != NULL)
	{
		copy = (*head)->next;
		(*head)->next = head_copy;
		head_copy = *head;
		*head = copy;
	}
	*head = head_copy;
	return (*head);
}
