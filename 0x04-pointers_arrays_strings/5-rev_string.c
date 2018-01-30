#include "holberton.h"
int _strlen(char *s);
#include <stdio.h>

/**
 * rev_string - prints a string in reverse order
 * @s: the string to count down from
 *
 * Description: Reverses the string in memory
 * Return: void
 */
void rev_string(char *s)
{
	int i, length;

	length = _strlen(s);

	char copy[length];
	int j = 0;
	--length;
	for (i = length; i >= 0; --i)
	{
		copy[j] = s[i];
		j++;
	}

	for (i = 0; i <= length; ++i)
	{
		s[i] = copy[i];
	}
	++i;
	s[i] = '\0';
}

/**
 * _strlen - returns the length of the string input
 * @s: the string to count the length
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int counter = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}

	return (counter);
}
