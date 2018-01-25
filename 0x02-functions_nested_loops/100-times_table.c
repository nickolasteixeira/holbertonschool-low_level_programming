#include "holberton.h"


/**
 * print_digits - prints out formating based off of digit value
 * @x: rows
 * @y: column 
 * 
 * Return: void
 */
void print_digits(int x, int y)
{
	if ((x * y) > 99)
	{
		_putchar(((x * y) / 100) + '0');
		_putchar((((x * y) / 10) % 10) + '0');
		_putchar(((x * y) % 10) + '0');
	}
	else if (((x * y) < 100) && ((x * y) > 9))
	{
		_putchar(((x * y) / 10) + '0');
		_putchar(((x * y) % 10) + '0');
	}
	else
	{
		_putchar(((x * y) % 10) + '0');
	}
}

/**
 * print_spaces - helper function, prints out number of spaces based on x * y
 * @x: rows
 * @y: column
 * 
 * Return: void
 */
void print_spaces(int x, int y)
{

	if ((x * y) >= 100)
	{
		_putchar(' ');
	}
	else if ((x * y) < 100 && (x * y) > 9)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else if ((x * y) < 10)
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
 * Return: void
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
