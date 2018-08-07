#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - linearly searches for the value in the array
 * @array: array to search
 * @size: size of the array
 * @value: value you need to find
 *
 * Return: the index position
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

		++i;
	}
	return (-1);
}
