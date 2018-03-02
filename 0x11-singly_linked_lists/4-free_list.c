#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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
