#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints the list of elements in the linked list
 * @h: the head list
 *
 * Return: the size of the linked list
 */
size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		++node;
	}

	return (node);
}
