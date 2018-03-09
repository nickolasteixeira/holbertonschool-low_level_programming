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

	mask = 1;
	mask = mask << index;

	if (n > 4294967295)
		return (-1);

	if (index >= n)
		return (-1);

	if (n == 0 && index == 0)
		return (0);

	if (mask & n)
		return (1);
	else
		return (0);

}
