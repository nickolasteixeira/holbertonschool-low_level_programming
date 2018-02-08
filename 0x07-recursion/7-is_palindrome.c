#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: string to count
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	unsigned int counter = 1;

	if (*s == '\0')
		return (0);

	return (counter + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - checks if a word/sentence is a palindrome
 * @s: the pointer to the string
 * @length: length of s - 1
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int length)
{
	if (*(s + 1) == '\0')
		return (1);

	if (*s != *(s + length))
		return (0);

	return (check_palindrome(s + 1, length - 2));
}
/**
 * is_palindrome - checks to see if a word is a palindrome
 * @s: string to check
 *
 * Return: the value from the check_palindrome function above
 */
int is_palindrome(char *s)
{
	unsigned int length = _strlen_recursion(s) - 1;

	if (*s == '\0')
		return (1);

	return (check_palindrome(s, length));
}
