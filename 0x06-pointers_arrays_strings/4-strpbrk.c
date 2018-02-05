#include "holberton.h"
/**
 * contains - returns 1 if char is found, 0 if not
 * @x: character to find
 * @acc: string to iterate though
 *
 * Return: 1 if found, 0 if not found
 */
int contains(char x, char *acc)
{
	while (*acc != '\0')
	{
		if (x == *acc)
			return (1);
		++acc;
	}
	return (0);
}
/**
 * _strpbrk - searches a string for a character, then
 * returns the pointer once the character is found
 * @s: the string to search
 * @accept: the string to check against s
 *
 * Return: pointer if a character is found,
 * NULL if nothing is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*s)
	{
		if (contains(*s, accept))
			return (s);
		++s;
	}

	return (0);
}
