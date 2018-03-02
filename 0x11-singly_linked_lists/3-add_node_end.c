#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds a new list to the
 * @head: the head of the link list
 * @str: the string to add to the structure
 *
 * Return: the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new, *copy;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		++i;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		copy = *head;
		while (copy->next != NULL)
			copy = copy->next;

		copy->next = new;
	}

	return (*head);
}
