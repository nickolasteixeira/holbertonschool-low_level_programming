#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory for b, exits if m = NULL
 * @b: size of malloc memory
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
