#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters
 * to upper
 * @s: string to check
 *
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		++i;
	}
	return (s);
}
