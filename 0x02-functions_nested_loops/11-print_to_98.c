#include <stdio.h>
/**
 * print_under_98 - prints all numbers under 98 from @x to 98 incrementing
 * @x: number to start printing
 *
 * Return: void;
 */

void print_under_98(int x)
{
	int i;

	for (i = x; i <= 98; ++i)
	{
		if (i != 98)
			printf("%d, ", i);
		else
			printf("%d\n", i);
	}
}

/**
 * print_over_98 - prints all numbers over 98 from @x to 98, decrementing
 * @x: number to start printing
 *
 * Return: void;
 */
void print_over_98(int x)
{
	int i;

	for (i = x; i >= 98; --i)
	{
		if (i != 98)
			printf("%d, ", i);
		else
			printf("%d\n", i);
	}
}

/**
 * print_to_98 - prints all numbers to or from 98, by 1
 * @min: starting number
 *
 * Return: void
 */

void print_to_98(int min)
{
	int i;

	if (min <= 98)
	{
		print_under_98(min);
	}
	else
	{
		print_over_98(min);
	}
}
