#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory to a new pointer, using malloc
 * then assigns a value of each memory address to 0
 * @nmemb: the number of memory slots to allocate
 * @size: the type of each size to allocate
 *
 * Return: void pointer with values of 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *grid;

	/* Edge cases */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* assigning memory from the heap using malloc */
	grid = malloc(nmemb * size);
	if (grid == NULL)
		return (NULL);

	return (grid);
}
