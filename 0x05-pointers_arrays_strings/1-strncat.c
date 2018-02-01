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
 * *_strncat - concats two strings up to n integer
 * @dest: destination string to add new characters
 * @src: string to add to the destination string
 * @n: concatenation length
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = _strlen(dest);
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		++i;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
