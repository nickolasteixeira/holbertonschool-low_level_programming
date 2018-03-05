#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at the index posiiton
 * in the linked list
 * @head: head of the linked list
 * @index: the index node to return
 *
 * Return: the node at the index position of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	count = 0;
	while (head != NULL)
	{
		if (count == index)
		{
			node = head;
			return (node);
		}

		++count;
		head = head->next;
	}

	return (NULL);
}
