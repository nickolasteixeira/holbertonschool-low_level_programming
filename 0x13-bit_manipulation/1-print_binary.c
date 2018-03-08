#include "holberton.h"
#include <stdio.h>
#include <limits.h>
/**
 * print_binary - prints the binary representation of the number
 * @n: the number to compare
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, temp;
	int flag;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = ULLONG_MAX;
	mask = mask >> 1;
	mask = ~mask;

	flag = 0;
	while (mask > 0)
	{
		temp = mask & n;
		if (temp)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
			_putchar('0');
		mask = mask >> 1;
	}
}
