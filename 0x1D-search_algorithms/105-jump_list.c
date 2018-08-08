#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 *
 *
 *
 *
 */
int jump_check(listint_t *jump_temp, size_t jump)
{
	size_t i;
		
	i = 0;
	while (i < jump)
	{
		if (jump_temp == NULL)
			return (-1);
		jump_temp = jump_temp->next;
	}
	return (1);
}
/*
void check_indexes(listint_t *j_temp, size_t jump, int value)
{
	size_t i;

	i = 0;
	while (i < jump)
	{
		printf("Value checked at index[%lu] = [%u]\n", j_temp->index, j_temp->n);
		if (value == j_temp->n)
			break;
		++i;
	}
}
*/
void check_values(listint_t *j_temp, size_t jump, int value)
{
	size_t i;
	listint_t *temp;

	temp = j_temp;
	
	printf("Value checked at index [%lu] = [%u]\n", j_temp->index, j_temp->n);
	i = 0;
	while (i < jump)
	{
		if (value == j_temp->n)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", temp->index, temp->index + jump);
			/*check_indexes(j_temp, jump, value);*/
			break;
		}
		else
		{
			temp = temp->next;
			++i;
		}
	}
}
/**
 *
 *
 *
 *
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, pass, i, j;
	listint_t *temp, *jump_temp;

	if (list == NULL)
		return (NULL);

	temp = list, jump = sqrt(size), i = 0;
	while (i < size)
	{
		jump_temp = temp;	
		pass = jump_check(jump_temp, jump);
		if (pass)
		{
			j = 0;
			while (j < jump)
			{
				temp = temp->next;
				++j;
			}
			/*jump_temp = temp;*/
			check_values(temp, jump, value);		
		}
		else
			break;

		i += jump;
	}
		
	return (list);
}
