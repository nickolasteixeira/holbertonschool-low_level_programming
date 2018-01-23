#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number and returns that digit
 * @i: integer to take the last digit from
 *
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
	int d = i % 10;

	if (d >= 0)
		_putchar(d + '0');
	else
		_putchar(-d + '0');

	if (d >= 0)
		return (d);
	else
		return (-d);
}
