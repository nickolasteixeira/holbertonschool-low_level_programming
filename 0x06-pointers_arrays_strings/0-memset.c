#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string to fill memory
 * @b: character to fill in string
 * @n: how many places to fill in memory
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		++i;
	}

	return (s);
}
