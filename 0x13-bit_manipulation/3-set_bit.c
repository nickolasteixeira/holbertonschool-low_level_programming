#include "holberton.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: the number to change
 * @index: the index to change
 *
 * Return: 1 if it changes, -1 if it failes
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int maxsize;

	mask = 1;
	maxsize = sizeof(n) * 8;

	if (index > maxsize)
		return (-1);

	*n = *n | mask << index;
	if (*n)
		return (1);
	else
		return (-1);
}
