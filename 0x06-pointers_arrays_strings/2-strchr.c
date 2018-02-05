#include "holberton.h"
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

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}

	s = 0;
	return (s);
}
