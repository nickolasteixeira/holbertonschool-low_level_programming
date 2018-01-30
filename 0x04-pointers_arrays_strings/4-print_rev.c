#include "holberton.h"

/**
 * print_rev - prints a string in reverse order
 * @s: the string to count down from
 *
 * Return: void
 */

void print_rev(char *s)
{

	int counter = 0;

	while (*s != '\0')
	{
		++counter;
		++s;
	}
	--s;

	while (counter > 0)
	{
		_putchar(*s);
		--s;
		--counter;
	}

	_putchar('\n');
}
