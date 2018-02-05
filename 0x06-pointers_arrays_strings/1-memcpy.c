#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: string to copy to
 * @src: string to copy from to dest
 * @n: amount of times to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*dest = src[i];
		++i;
		*(++dest);
	}

	*(dest - i);

	return (dest);
}
