#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - free all the memory from malloc in your linked list
 * @head: starting point from your linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
