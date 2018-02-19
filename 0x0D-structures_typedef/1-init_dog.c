#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes the dog struct
 * @d: the dog struct to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
