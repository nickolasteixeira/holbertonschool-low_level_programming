#include "search_algos.h"
#include <math.h>
#include <stdio.h>
/**
 * find_value - checks if the value exists in the array
 * @array: array to check
 * @i: index position
 * @end: end of the array to check
 * @v: value to check for
 * @s: size of the array
 *
 * Return: index value or -1
 */
int find_value(int *array, unsigned int i, unsigned int end, int v, size_t s)
{
	while (i <= end)
	{
		printf("Value checked array[%u] = [%u]\n", i, array[i]);
		if (i >= s)
			return (-1);
		if (v == array[i])
			return (i);
		++i;
	}
	return (-1);
}
/**
 * jump_search - jumps through the array
 * @array: array to check
 * @value: value to check for
 * @size: size of the array
 *
 * Return: index value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int i, step;

	if (array == NULL)
		return (-1);

	step = sqrt(size), i = 0;
	while (i < size)
	{
		printf("Value checked array[%u] = [%u]\n", i, array[i]);
		if (value >= array[i] && value <= array[i + step])
		{
			printf("Value found between indexes [%u] and [%u]\n", i, i + step);
			return (find_value(array, i, i + step, value, size));
		}
		i += step;
	}

	/* finding value before the 2nd to last step value */
	printf("Value found between indexes [%u] and [%u]\n", i - step, i);
	return (find_value(array, i - step, i, value, size));
}
