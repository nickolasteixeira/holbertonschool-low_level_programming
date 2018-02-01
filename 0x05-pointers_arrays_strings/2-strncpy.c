#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: destination string to copy
 * @src: source string to copy to destination
 * @n: length to copy from src to dest
 *
 * Return: destinations first memory address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
