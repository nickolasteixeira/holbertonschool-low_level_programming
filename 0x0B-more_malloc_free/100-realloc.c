#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to take the values from
 * @old_size: size of ptr
 * @new_size: new size of the pointer you will return
 *
 * Return: a new pointer containing the contents of ptr, with memory
 * up to the new_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int length, i;
	char *n_p, *place_holder;

	place_holder = ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	n_p = malloc(new_size);

	length = new_size > old_size ? new_size : old_size;

	i = 0;
	while (i < length)
	{
		n_p[i] = place_holder[i];
		++i;
	}
	n_p[i] = '\0';
	free(ptr);
	return (n_p);
}
