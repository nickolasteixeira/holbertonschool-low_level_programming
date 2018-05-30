#include "sort.h"
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 *
 *
 *
 * Return: the index of the pivot
 */
 int partition(int *array, size_t start, size_t end, size_t n)
{
	size_t p_idx, i;
	int pivot;

	p_idx = start;
	pivot = array[end];

	printf("Start Index: %lu Pivot: %d End Length: %lu\n", p_idx, pivot, end);	
	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			if (i != p_idx)
			{
				printf("array[%lu]: %d <=> array[%lu]: %d\n", p_idx, array[p_idx], i, array[i]);
				swap(&array[i], &array[p_idx]);
				print_array(array, n);
			}
			p_idx++;
		}
		printf("index++ %lu\n", i);	
	}
	printf("P_IDX %lu\n", p_idx);
	if (array[p_idx] > array[end] && i != p_idx)
	{
		swap(&array[p_idx], &array[end]);
		print_array(array, n);
	}
	printf("-------END Partition-------\n\n\n");
	return p_idx;	
}

/**
 *
 *
 *
 *
 */
void q_sort(int *array, size_t start, size_t end, size_t size)
{
	size_t p_idx;

	if (start < end)
	{
		p_idx = partition(array, start, end, size);
		printf("Partition: %lu\n", p_idx);
		if (p_idx > 0 && p_idx > start)
		{
			printf("Enterered Left: PDX: %lu Start: %lu\n", p_idx, start);
			q_sort(array, start, p_idx - 1, size);
		}
		if (p_idx < size - 1)
		{
			printf("Entered Right\n");
			q_sort(array, p_idx + 1, end, size);
		}
	}
}
/**
  *
  *
  *
  *
  */
void quick_sort(int *array, size_t size)
{
	q_sort(array, 0, size - 1, size);
}	
