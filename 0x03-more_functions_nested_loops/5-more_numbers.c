#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 1;
	int j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			++j;
		}
		++i;
		j = 0;
		_putchar('\n');
	}
}
