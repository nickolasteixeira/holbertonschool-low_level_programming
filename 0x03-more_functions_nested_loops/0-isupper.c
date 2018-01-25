#include <stdio.h>
/**
 * _isupper - checks to see if a letter is uppercase or not
 * @c: integer to check for uppercase
 *
 * Return: 1 if letter is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
