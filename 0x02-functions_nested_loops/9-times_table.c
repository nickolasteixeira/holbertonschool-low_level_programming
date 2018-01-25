#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int a, b;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{

			if ((a * b) < 10)
			{
				_putchar((a * b) + '0');
			}
			else if ((a * b) >= 10)
				if (a > 0 && b > 0)
				{
					_putchar(((a * b) / 10) + '0');
					_putchar(((a * b) % 10) + '0');
				}

			if (b == 9)
			{
				_putchar('\n');
				++b;
				break;
			}
			else if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			if ((a * ++b) < 10)
				_putchar(' ');
		}
		++a;
	}
}
