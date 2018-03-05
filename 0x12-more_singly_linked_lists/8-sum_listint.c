#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - adds all the linked list int values to a sum
 * @head: head of the linked list
 *
 * Return: the sum of all the linked list node values
 */
int sum_listint(listint_t *head)
{
	listint_t *copy;
	int sum;

	if (head == NULL)
		return (0);

	copy = head;
	sum = 0;
	while (copy != NULL)
	{
		sum += copy->n;
		copy = copy->next;
	}

	return (sum);
}
