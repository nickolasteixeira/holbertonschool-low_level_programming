#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer to compare
 * @index: index to return
 *
 * Return: the value at the index position of the binary number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int maxsize;

	maxsize = sizeof(n) * 8;
	mask = 1;
	mask = mask << index;

	if (index > maxsize)
		return (-1);

	if (mask & n)
		return (1);
	else
		return (0);

}
