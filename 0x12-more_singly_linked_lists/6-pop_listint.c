#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of the linked list
 * and returns the head node's data(n)
 * @head: the head of the linked list
 *
 * Return: the integer in the linked list, n
 */
int pop_listint(listint_t **head)
{
	listint_t *copy;
	int n;

	if (*head == NULL)
		return (0);

	copy = *head;
	n = copy->n;
	*head = (*head)->next;
	free(copy);

	return (n);
}
