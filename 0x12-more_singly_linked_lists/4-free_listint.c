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
	listint_t *copy;

	while (head != NULL)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
}
