#include "function_pointers.h"
/**
 * int_index - checks every element of the array
 * with the cpm function, returns index if element
 * is true, -1 if not found
 * @array: array being passed
 * @size: size of the array
 * @cmp: function used to compare logic
 *
 * Return: index value if true, -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i, check;

	/* edge case */
	if (size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		check = cmp(array[i]);
		if (check)
			return (i);

		++i;
	}

	return (-1);
}
