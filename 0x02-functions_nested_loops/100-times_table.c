#include "holberton.h"

/**
 * print_digits - prints out formating based off of digit value
 * @a: rows
 * @b: column
 *
 *
 */
void print_digits(int a, int b)
{
	if ((a * b) > 99)
	{
		_putchar(((a * b) / 100) + '0');
		_putchar((((a * b) / 10) % 10) + '0');
		_putchar(((a * b) % 10) + '0');
	}
	else if (((a * b) < 100) && ((a * b) > 9))
	{
		_putchar(((a * b) / 10) + '0');
		_putchar(((a * b) % 10) + '0');
	}
	else
	{
		_putchar(((a * b) % 10) + '0');
	}

}
/**
 * print_spaces - helper function, prints out number of spaces based on x * y
 * @m: rows
 * @n: column
 *
 *
 */
void print_spaces(int m, int n)
{

	if ((m * n) >= 100)
	{
		_putchar(' ');
	}
	else if ((m * n) < 100 && (m * n) > 9)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else if ((m * n) < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}

}

/**
 * print_times_table - prints multiplication tables between 1 and 15
 * @n: multiplication number to use to print table
 *
 *
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int x, y;

	x = 0;

	while (x <= n)
	{
		y = 0;

		while (y <= n)
		{
			print_digits(x, y);

			if (y != n)
				_putchar(',');
			else
			{
				_putchar('\n');
				break;
			}
			++y;

			print_spaces(x, y);
		}
		++x;
	}

}
