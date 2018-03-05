#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of the linked list
 * @head: the head of the linked list
 * @n: the integer to add to the node
 *
 * Return: the head of the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *copy;

	copy = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (copy == NULL)
	{
		*head = new;
	}
	else
	{
		while (copy->next != NULL)
		{
			copy = copy->next;
		}
		copy->next = new;
	}

	return (new);
}
