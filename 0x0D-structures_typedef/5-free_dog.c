#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the memory used to create the pointer
 * that points to the dog struct
 * @d: the struct do free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
