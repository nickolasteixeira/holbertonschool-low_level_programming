#include "holberton.h"

/**
 * _strcmp - compares two strings, returns 0 if equal
 * returns difference if chars are different based off
 * ascii table
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 *
 * Return: difference if difference, 0 if the same
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		++i;
	}

	return (0);
}
