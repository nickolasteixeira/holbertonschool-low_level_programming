#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - frees all the memory for all the linked list
 * @head: beginning of the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *copy, *head_copy;

	if (*head == NULL || head == NULL)
		return;

	head_copy = *head;

	while (*head != NULL)
	{
		copy = *head;
		*head = (*head)->next;
		free(copy);
	}

	head_copy = NULL;
	*head = head_copy;
}
