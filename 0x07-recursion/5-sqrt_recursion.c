#include "holberton.h"
/**
 * check_square - checks to see if a number can be squared evenly
 * @n: the number to square
 * @x: the incrementor
 *
 * Return: -1 if not evenly squared, number if
 * evenly squared
 */
int check_square(int n, int x)
{
	if (n == (x * x))
		return (x);
	if (x > n)
		return (-1);

	return (check_square(n, x + 1));
}

/**
 * _sqrt_recursion - square root function
 * @n: number to sqaure root
 *
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	unsigned int i = 0;

	if (i == 1)
		return (1);
	if (i == 0)
		return (0);

	return (check_square(n, 1));
}
