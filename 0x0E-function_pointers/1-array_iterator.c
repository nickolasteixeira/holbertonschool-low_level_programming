#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - iterates through the array that is passed
 * and uses a callback function
 * @array: array to iterate
 * @size: size of array
 * @action: callback function being passed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		++i;
	}
}
