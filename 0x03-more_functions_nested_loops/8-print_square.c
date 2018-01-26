#include "holberton.h"

/**
 * print_square - prints a square to the console
 * @size: size of the square you print
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			_putchar('#');
			++j;
		}
		_putchar('\n');
		++i;
	}
}
