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
	--counter;
	return (counter);
}

/**
 * check_palindrome - checks if a word/sentence is a palindrome
 * @s: the pointer to the string
 * @length: length of s - 1
 * @x: incrementor variable
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int length, int x)
{
	if (*(s + 1) == '\0')
		return (1);

	if (*s != *(s + length))
		return (0);

	return (check_palindrome((s + 1), (length - (++x)), 1));
}
/**
 * is_palindrome - checks to see if a word is a palindrome
 * @s: string to check
 *
 * Return: the value from the check_palindrome function above
 */
int is_palindrome(char *s)
{
	unsigned int length = _strlen(s);

	if (*s == '\0')
		return (1);

	return (check_palindrome(s, length, 1));
}
