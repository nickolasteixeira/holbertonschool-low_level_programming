#include "holberton.h"
/**
 * check_prime - checks for prime numbers
 * @n: prime number
 * @x: iterator
 *
 * Return: 0 if not prime, 1 if prime
 */
int check_prime(int n, int x)
{
	if (x == n)
		return (1);
	if (n % x == 0)
		return (0);

	check_prime(n, x + 1);
}

/**
 * is_prime_number - checks for prime number
 * @n: the prime number to check
 *
 * Return: 0 if not prime, 1 if prime
 */
int is_prime_number(int n)
{

	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}
