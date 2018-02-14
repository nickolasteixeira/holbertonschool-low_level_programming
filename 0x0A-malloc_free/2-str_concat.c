#include "holberton.h"
#include <stdlib.h>
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
 * str_concat - concats two strings using malloc
 * @s1: string 1 to copy
 * @s2: string 2 to copy
 *
 * Return: address of pointer that holds s1 and s2 values
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int length1, length2, totalLength, i;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";

	length1 = _strlen(s1);
	length2 = _strlen(s2);
	totalLength = length2 + length1 + 1;

	s = malloc((totalLength) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		++i;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		s[length1 + i] = s2[i];
		++i;
	}
	s[length1 + i] = '\0';
	return (s);
}
