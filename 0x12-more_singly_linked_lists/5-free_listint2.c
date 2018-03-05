#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *copy;

	while (*head != NULL)
	{
		copy = *head;
		*head = (*head)->next;
		free(copy);
	}
}
