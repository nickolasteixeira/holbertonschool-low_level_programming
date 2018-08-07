#include "search_algos.h"
#include <stdio.h>
/**
 * interpolation_search - search interpolation style
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: index or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	low = 0, high = size - 1;
	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
		      (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
