#include "sort.h"
/**
 *
 *
 *
 *
 */
void merge_sort(int *array, size_t size)
{
	int *storage;

	if (array == NULL || size == 0 || size == 1)
		return;
	
	storage = malloc(sizeof(array[0]) * size);
	if (!storage)
		return;

	m_sort(array, storage, 0, size);
	free(storage);	
}

/**
 *
 *
 *
 *
 *
 */
void m_sort(int *array, int *storage, size_t left, size_t right)
{
	int middle;

	if (left < right)
	{
		middle = (left + right) / 2;
		m_sort(array, storage, left, middle);
		m_sort(array, storage, middle + 1, right);
		merge(array, storage, left, right);
	}
}

void merge(int *array, int *storage, size_t left, size_t right)
{
	size_t i, j, k;

	i = 0; j = 0; k = 0;

	while (i <= left && j <= right)
	{
		if (array[i] <= array[j])
		{
			storage[k] = array[i];
			i++;
		}
		else
		{
			storage[k] = array[j];
			j++;
		}
		k++;
	}
	while (i < left)
	{
		storage[k] = array[i];
		k++;
		i++;
	}
	while (j < right)
	{
		storage[k] = array[j];
		k++;
		i++;
	}

	for (i = left; i < right; i++)
		array[i] = storage[i];
}
