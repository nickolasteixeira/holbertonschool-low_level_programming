#include "holberton.h"

/**
 * _strlen - returns the length of the string in the parameter
 * @s: string to count the length
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
 * puts2 - prints every other character, starting with the first
 * @str: the string to iterate through
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int length = _strlen(str);

	i = 0;
	while (i <= length)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
