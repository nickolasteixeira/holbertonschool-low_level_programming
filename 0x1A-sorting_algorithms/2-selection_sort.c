#include "sort.h"
/**
 * selection_sort - sorts by the selection method
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{

	size_t i, j, runner, temp;

	i = 0;
	while (i < (size - 1))
	{
		runner = i;
		j = i + 1;
		while (j < size)
		{
			if (array[runner] > array[j])
				runner = j;
			++j;
		}
		if (runner != i)
		{
			temp = array[i];
			array[i] = array[runner];
			array[runner] = temp;
			print_array(array, size);
		}
		++i;
	}
}
