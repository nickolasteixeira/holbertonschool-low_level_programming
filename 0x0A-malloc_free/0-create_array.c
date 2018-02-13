#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array the size of int size
 * with the character c
 * @size: size of the array
 * @c: character to add to the array
 *
 * Return: pointer to s
 */
char *create_array(unsigned int size, char c)
{
	char *s = (char*)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return (s);
}
