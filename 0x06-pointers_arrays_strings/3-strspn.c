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
 * _strspn - gets the length of a prefix substring
 * @s: the string to check accept
 * @accept: the string check against s
 *
 * Return: number of single occurances beteween
 * each string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, counter, slength, acceptlength;

	slength = _strlen(s);
	acceptlength = _strlen(accept);
	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				++counter;
				k = 1;
				break;
			}
			++j;
		}
		if (k == 0)
			return (counter);

		++i;
	}

	if (s[slength] == accept[acceptlength])
		++counter;

	return (counter);
}
