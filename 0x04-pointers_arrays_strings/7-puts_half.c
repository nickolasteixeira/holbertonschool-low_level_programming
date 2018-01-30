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

	return (counter);
}

/**
 * puts_half - prints the 2nd half of a string
 * @str: string the print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int half_length = length;

	if (length % 2 == 1)
		half_length = (length - 1) / 2;
	else
		half_length /= 2;

	while (half_length < length)
	{
		_putchar(str[half_length]);
		++half_length;
	}
	_putchar('\n');
}
