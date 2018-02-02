#include "holberton.h"
/**
 * check_condition - checks if a character is a special character
 * @t: the character to check
 *
 * Return: a character
 */
char check_condition(char t)
{
	int array[14] = {
		' ', '\t', '\n', ',', ';',
		'.', '!', '?', '\"', '(',
		')', '{', '}', '\0'};

	unsigned int i = 0;

	while (array[i] != '\0')
	{
		if (array[i] == t)
			return (array[i]);
		++i;
	}

	return ('\0');
}

/**
 * cap_string - capitalizes first letter in a word
 * @s: string pointer to capitalize
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		while (s[i] == check_condition(s[i]))
		{
			if (s[i] == '\t')
				s[i] == ' ';
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		++i;
	}

	return (s);
}
