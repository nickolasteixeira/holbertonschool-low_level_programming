#include "holberton.h"
/**
 * contains - returns 1 if the character is found, 0 if not
 * @x: the character to search for
 * @acc: the string to loop through
 *
 * Return: 1 if the char is found in the string, 0 if not
 */
int contains(char x, char *acc)
{
	while (*acc != '\0')
	{
		if (x == *acc)
			return (1);
		*acc++;
	}
	return (0);
}
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to check accept
 * @accept: the string check against s
 *
 * Return: number of single occurances beteween
 * each string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter;

	while (*s != '\0')
	{
		if (contains(*s, accept))
			++counter;
		else
			return (counter);
		*s++;
	}

	return (counter);
}
