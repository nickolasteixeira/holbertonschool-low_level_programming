#include "holberton.h"

/**
 * print_triangle - prints a triangle to the output
 * @size: size of triangle to print
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, m;

	i = 1;
	m = size;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			if (j >= m)
				_putchar('#');
			else
				_putchar(' ');

			++j;
		}
		--m;
		++i;
		_putchar('\n');
	}
}
