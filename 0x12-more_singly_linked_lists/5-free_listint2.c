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
	listint_t *new;

	new = *head;
	if (new == NULL)
		return;

	while (new != NULL)
	{
		free(new);
		new = new->next;
	}
}
