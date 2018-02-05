#include "holberton.h"
/**
 * print_chessboard - prints a chessboard of pieces
 * @a: multidimensional loop
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (j < 7)
			{
				_putchar(a[i][j]);
			}

			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			++j;
		}
		++i;
	}
}
