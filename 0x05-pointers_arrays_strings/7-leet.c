#include "holberton.h"

/**
 * *leet - encodes a string to 1337
 * @s: the string to encode
 *
 * Return: pointer to the string
 */
char *leet(char *s)
{
	unsigned int i, x, j;
	char cases[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replacement[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (cases[j] != '\0')
		{
			if (s[i] == cases[j])
				s[i] = replacement[j];
			++j;
		}
		++i;
	}
	return (s);
}
