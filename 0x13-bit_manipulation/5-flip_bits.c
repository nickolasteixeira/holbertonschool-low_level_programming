#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: number 1
 * @m: number 2 to compare
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, compare;
	unsigned int counter = 0;

	mask = 1;
	compare = n ^ m;
	while (compare)
	{
		if (mask & compare)
			++counter;

		compare = compare >> 1;
	}

	return (counter);
}
