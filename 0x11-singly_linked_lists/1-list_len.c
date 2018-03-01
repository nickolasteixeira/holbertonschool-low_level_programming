#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints the number of structs in the linked list
 * @h: the head link to iterate through
 *
 * Return: The number of structs in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int elements = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h)
			++elements;

		h = h->next;
	}

	return (elements);
}
