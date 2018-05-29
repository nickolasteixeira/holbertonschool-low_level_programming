#include "sort.h"
/**
 * swap - swaps the values of two different memory locations
 * @a: integer 1
 * @b: integer 2
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - partitions the array
 * @array: the array to partition
 * @start: the starting position
 * @end: the ending position
 * @n: the length of the array
 *
 * Return: the index of the pivot
 */
int partition(int *array, size_t start, size_t end, size_t n)
{
	int pivot, p_idx;
	unsigned int i;

	p_idx = start;
	pivot = array[end];

	for (i = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			if (i != start)
			{
				swap(&array[p_idx], &array[i]);
				print_array(array, n);
				p_idx += 1;
			}
		}
	}
	if (array[p_idx] > array[end])
	{
		swap(&array[p_idx], &array[end]);
		print_array(array, n);
	}
	return (p_idx);
}

/**
 * q_sort - calls itself recursively to partition the array
 * @array: array to sort
 * @start: start of the array
 * @end: end of the array
 * @size: length of the array
 *
 * Return: void
 */
void q_sort(int *array, size_t start, size_t end, size_t size)
{
	size_t p_idx;

	if (end == 0 || end <= start)
		return;

	if (start < end)
	{
		p_idx = partition(array, start, end, size);
		if (p_idx > 0 && p_idx > start)
			q_sort(array, start, p_idx - 1, size);
		if (p_idx < size - 1)
			q_sort(array, p_idx + 1, end, size);
	}
}
/**
 * quick_sort - calls the q_sort method to partition
 * @array: array to sort
 * @size: length of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array ==  NULL || size == 0 || size == 1)
		return;
	q_sort(array, 0, size - 1, size);
}
