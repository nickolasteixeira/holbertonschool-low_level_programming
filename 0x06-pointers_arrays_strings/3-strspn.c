#include "holberton.h"
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
	unsigned int i, j, counter;

	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == s[j])
			{
				++counter;
				break;
			}
			++j;
		}
		++i;
	}

	return (counter);
}
