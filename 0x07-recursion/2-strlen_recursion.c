#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: string to count
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	unsigned int counter = 1;

	if (*s == '\0')
		return (0);

	return (counter + _strlen_recursion(s + 1));
}
