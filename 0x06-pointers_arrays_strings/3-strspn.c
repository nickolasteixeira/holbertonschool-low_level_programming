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
	unsigned int count, i, j;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				++count;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (count);
			++j;
		}
		++i;
	}

	return (count);
}
