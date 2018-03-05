#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node to the beginning of the list
 * @head: head of the linked list
 * @n: integer to add to the node
 *
 * Return: head value of the linked list
 */
listint_t *add_nodeint(listint_t **head,  const int n)
{

	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
