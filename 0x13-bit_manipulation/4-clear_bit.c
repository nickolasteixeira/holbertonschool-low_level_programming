#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: the integer to change
 * @index: the index to change the bit to 0
 *
 * Return: 1 if successful, -1 if not successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int maxsize;

	mask = 1;
	maxsize = sizeof(n) * 8;

	if (index > maxsize)
		return (-1);

	if (*n == '\0')
		return (-1);

	*n = ~*n;
	*n = *n | mask << index;
	*n = ~*n;
	if (*n)
		return (1);
	else
		return (-1);
}
