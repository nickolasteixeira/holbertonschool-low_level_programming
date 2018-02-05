#include "holberton.h"
#include <stdio.h>
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
 * _strstr - returns a pointer to the first letter of a string
 * if the needle string is found int the haystack string
 * @haystack: string to check the needle against
 * @needle: the string to compare against the haystack
 *
 * Return: a pointer if the needle is found, null otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int length, i, j, count;

	length = _strlen(needle);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		count = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
				++count;
			++j;
		}

		if (count == length)
			return (haystack);

		*(++haystack);
		++i;
	}

	return (0);
}
