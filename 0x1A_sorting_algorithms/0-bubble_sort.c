#include "sort.h"
/**
 * swap - swaps two values in memory via a pointer
 * @a: value a
 * @b: value b
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - bubble sort algorithm
 * @array: array to parse through
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, i;

	if (!array)
		return;

	for (x = 0; x < size - 1; ++x)
	{
		for (i = 0; i < size - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
			}
		}
	}
}
