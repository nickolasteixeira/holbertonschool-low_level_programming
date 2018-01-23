#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times ending with a new line
 *
 * Return: void;
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		int c;

		for (c = 'a'; c <= 'z'; ++c)
		{
			_putchar(c);
		}
		_putchar('\n');

		++i;
	}
}
