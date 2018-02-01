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
	int src_length = _strlen(src);
	int new_length = (src_length - 1) + n;
	int i;

	if (new_length > (dest_length + src_length))
		new_length = dest_length + src_length;

	i = 0;
	--src_length;
	while (src_length < new_length)
	{
		dest[src_length] = src[i];
		++i;
		++src_length;
	}
	dest[src_length] = '\0';
	return (dest);
}
