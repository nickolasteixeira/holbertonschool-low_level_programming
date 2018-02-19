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

	while (s[i] != '\0')
	{
		++i;
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
	int i, length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	new_dog = malloc(sizeof(struct dog_t));
	if (new_dog == NULL)
		return (NULL);

	n = malloc((length1 * sizeof(char)) + 1);
	o = malloc((length2 * sizeof(char)) + 1);
	if (n == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	if (o == NULL)
	{
		free(new_dog);
		free(n);
		return (NULL);
	}

	i = 0;
	while (i < length1)
	{
		n[i] = name[i];
		++i;
	}
	n[i] = '\0';

	i = 0;
	while (i < length2)
	{
		o[i] = owner[i];
		++i;
	}
	o[i] = '\0';

	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;

	return (new_dog);
}
