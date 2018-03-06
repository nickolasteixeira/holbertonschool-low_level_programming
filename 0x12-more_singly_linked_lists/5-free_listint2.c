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

	if (head == NULL)
		return;

	head_copy = *head;

	while (head_copy != NULL)
	{
		copy = head_copy;
		head_copy = head_copy->next;
		free(copy);
	}

	*head = NULL;
}
