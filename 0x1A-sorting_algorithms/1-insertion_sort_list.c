#include "sort.h"
/**
 * insertion_sort_list - runs the insertion sorting method
 * @list: doubly linked list to sort
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *runner;

	runner = (*list)->next;

	while (runner)
	{
		while (runner->prev && runner->n < runner->prev->n)
		{
			runner->prev->next = runner->next;
			if (runner->next)
				runner->next->prev = runner->prev;
			runner->next = runner->prev;
			runner->prev = runner->prev->prev;
			runner->next->prev = runner;

			if (runner->prev == NULL)
				*list = runner;
			else
				runner->prev->next = runner;
			print_list(*list);
		}
		runner = runner->next;
	}
}
