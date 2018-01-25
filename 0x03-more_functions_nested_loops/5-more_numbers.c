#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 1;

	int j;

	while (i <= 10)
	{
		j = 0;

		while (j <= 14)
		{

			if (j > 10)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
			++j;
		}
		++i;
		_putchar('\n');
	}
}
