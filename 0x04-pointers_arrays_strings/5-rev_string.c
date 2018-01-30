#include "holberton.h"
int _strlen(char *s);
#include <stdio.h>
/**
 * print_rev - prints a string in reverse order
 * @s: the string to count down from
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, length;	
	length = _strlen(s);

	char copy[length]; 

	for (i = length; i >= 0; --i)
	{
		*s = copy[i];
		--s;
	}
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

	while (*s != '\0')
	{
		counter++;
		*s++;
		i++;
	}

	return (counter);
}
