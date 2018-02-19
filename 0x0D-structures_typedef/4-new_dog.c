#include "dog.h"
#include <stdlib.h>
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
	dog_t *dog_copy;

	new_dog = malloc(sizeof(struct dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	dog_copy = malloc(sizeof(struct dog_t));
	if (dog_copy == NULL)
		return (NULL);
	dog_copy->name = name;
	dog_copy->owner = owner;

	return (new_dog);
}
