#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _pow - returns the total number after
 * power and base are based in
 * @base: base number
 * @power: power number
 *
 * Return: total
 */
unsigned int _pow(int base, int power)
{
	unsigned int total;

	if (power == 0)
		return (1);

	total = 1;
	while (power > 0)
	{
		total *= base;
		--power;
	}
	return (total);
}
/**
 * _strlen - returns the length of a string
 * @s: the string to get the length
 *
 * Return: length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int length = 0;

	while (s[length] != '\0')
	{
		if (s[length] != '0' && s[length] != '1')
			return (0);
		++length;
	}
	return (length);
}

/**
 * binary_to_uint - changes a binary string to a integer
 * @b: the constant string
 *
 * Return: usigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, length_copy, number, i;

	if (b == NULL)
		return (0);

	length = _strlen(b);
	if (length == 0)
		return (0);

	i = 0;
	number = 0;
	length_copy = length;
	while (i < length)
	{
		if (b[i] == '1')
		{
			number += _pow(2, (length_copy - 1));
		}
		++i;
		--length_copy;
	}
	return (number);
}
