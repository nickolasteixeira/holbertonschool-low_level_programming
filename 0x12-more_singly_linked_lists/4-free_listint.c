#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free all memory from the heap using malloc for
 * our linked lists
 * @head: head of the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
