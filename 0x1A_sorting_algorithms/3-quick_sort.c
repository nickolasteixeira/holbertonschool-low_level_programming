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
	int pivot, p_idx;
	unsigned int i;

	p_idx = start;
	pivot = array[end];

	printf("Start %d Pivot %d End %lu\n", p_idx, pivot, end);	
	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			printf("array[i] %d\n", array[i]);
			swap(&array[i], &array[p_idx]);
			print_array(array, n);
			p_idx += 1;
		}	
	}
	printf("P_IDX %d\n", p_idx);
	if (array[p_idx] > array[end])
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
			printf("Enterered\n");
			q_sort(array, start, p_idx - 1, size);
		}
		if (p_idx < size - 1)
			q_sort(array, p_idx + 1, end, size);
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

