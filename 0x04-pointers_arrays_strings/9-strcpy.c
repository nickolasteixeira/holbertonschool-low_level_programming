#include "holberton.h"
/**
 * _strlen - returns the length of a string in the parameter
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		++counter;
	}
	return (counter);
}


/**
 * *_strcpy - copies the string pointed to by src
 * @src: your source to copy to dest
 * @dest: where you copy the src to
 *
 * Description: copies the src string to the dest
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int length = _strlen(src);

	while (i <= length)
	{
		dest[i] = src[i];
		++i;
	}

	return (dest);
}
