#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59
 *
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a, b, m, n;

	a = 0;

	while (a <= 2)
	{
		b = 0;

		while (b <= 9)
		{
			m = 0;

			while (m <= 5)
			{
				n = 0;
				if (a == 2 && b > 3)
					break;

				while (n <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(n + '0');
					_putchar('\n');
					++n;
				}
				++m;
			}
			++b;
		}
		++a;
	}
}
