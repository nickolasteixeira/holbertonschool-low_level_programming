#include "holberton.h"
/**
 * cap_string - capitalizes first letter in a word
 * @s: string pointer to capitalize
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	unsigned int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;

	while (s[i] != '\0')
	{
		switch (s[i])
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '\"':
		case '(':
		case ')':
		case '{':
		case '}':
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		++i;
	}

	return (s);
}
