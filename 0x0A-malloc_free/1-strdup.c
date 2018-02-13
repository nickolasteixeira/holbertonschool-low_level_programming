#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the length of a string, without '\0'
 * @s: string to count
 *
 * Return: length of the string, int
 */
int _strlen(char *s)
{
	unsigned int counter = 0;

	while (*s != '\0')
	{
		++counter;
		++s;
	}
	return (counter);
}
/**
 * _strdup - copies the string passed via the parameter
 * @str: string to copy
 *
 * Return: a new pointer to the string that was copied
 */
char *_strdup(char *str)
{
	int length, i;
	char *s;

	length = _strlen(str);
	s = malloc((length + 1) * sizeof(char));

	if (s == NULL || str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		++i;
	}
	return (s);
}
