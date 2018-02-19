#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - finds the length of a string
 * @s: string to find the length
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		++i;
		++s;
	}
	return (i);
}
/**
 * new_dog - initializes a struct dog_t new_dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 *
 * Return: pointer to the dog_t struct that was created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *n;
	char *o;

	new_dog = malloc(sizeof(struct dog_t));
	if (new_dog == NULL)
		return (NULL);

	n = malloc(_strlen(name) * sizeof(char));
	o = malloc(_strlen(owner) * sizeof(char));
	if (n == NULL)
		return (NULL);
	if (o == NULL)
		return (NULL);

	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;

	return (new_dog);
}
