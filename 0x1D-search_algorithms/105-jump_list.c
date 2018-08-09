#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 * jump_check - checks jump value in singly list
 * @jump_temp: pointer to use to jump
 * @jump: size of the jump value
 *
 * Return: -1 if hitting NULL, 1 if able to jump
 */
int jump_check(listint_t *jump_temp, size_t jump)
{
	size_t i;

	i = 0;
	while (i < jump)
	{
		if (jump_temp->next == NULL)
			return (-1);
		jump_temp = jump_temp->next;
		++i;
	}
	return (1);
}

/**
 * jump_list - function that searches for a value in a sorted list of integers
 * @list: list to search
 * @size: size to jump
 * @value: value to search for
 *
 * Return: NUll if not found, index pointer if found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i, j;
	int found, pass;
	listint_t *temp, *j_temp;

	if (list == NULL)
		return (NULL);

	temp = list, jump = sqrt(size), i = 0, found = 0;
	while (temp)
	{
		j_temp = temp;
		pass = jump_check(j_temp, jump);
		if (pass == 1)
		{
			j = 0;
			j_temp = temp;
			while (j < jump)
			{
				if (value == temp->n)
					found = 1;
				temp = temp->next;
				++j;
			}
			printf("Value checked at index [%lu] = [%u]\n", temp->index, temp->n);
			if (found == 1)
			{
				printf("Value found between indexes [%lu] = [%lu]\n", j_temp->index, temp->index);
				j = 0;
				while (j < jump)
				{
					printf("Value checked at index [%lu] = [%u]\n", j_temp->index, j_temp->n);
					if (value == j_temp->n)
						return (j_temp);
					j_temp = j_temp->next;
				}
				return (NULL);
			}
			i += jump;
		}
		else
		{
			while (j_temp->next)
				j_temp = j_temp->next;
			printf("Value found between indexes [%lu] = [%lu]\n", temp->index, j_temp->index);
			while (temp)
			{
				printf("Value checked at index [%lu] = [%u]\n", temp->index, temp->n);
				if (temp->next == NULL)
					return (NULL);
				if (value == temp->n)
					return (temp);
				temp = temp->next;
			}
			return (NULL);
		}
	}
	return (NULL);
}
