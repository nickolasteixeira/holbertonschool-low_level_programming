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

	while (i <= size)
	{
		j = 1;
		m = size;
		while (j <= size)
		{
			if (j == size)
			{
				_putchar('#');
				_putchar('\n');
			}
			else if (j >= m)
			{
				_putchar('#');
			}
			else
			{	
				_putchar(' ');
			}

			--m;
			++j;
		}
		++i;
	}
}
