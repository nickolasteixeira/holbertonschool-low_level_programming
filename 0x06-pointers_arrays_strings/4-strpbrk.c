#include "holberton.h"
/**
 * _strpbrk - searches a string for a character, then
 * returns the pointer once the character is found
 * @s: the string to search
 * @accept: the string to check against s
 *
 * Return: pointer if a character is found,
 * NULL if nothing is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			++j;
		}
		*(++s);
	}
	*(s - 1);

	return (0);
}
