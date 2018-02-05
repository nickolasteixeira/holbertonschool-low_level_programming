#include "holberton.h"
/**
 * _strlen - returns the length of the string in the parameter
 * @s: the string
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}
/**
 * _strchr - locates the first character in a string
 * and returns a pointer to it
 * @s: string to look through
 * @c: character to use to look through the s string
 *
 * Return: pointer if string is found
 * Null if no character is found in the string
 */
char *_strchr(char *s, char c)
{
	unsigned int length, i;
	length = _strlen(s);
	i = 0;

	while (i < length)
	{
		if (*s == c)
			return (s);
		++s;
	}

	return (0);
}
