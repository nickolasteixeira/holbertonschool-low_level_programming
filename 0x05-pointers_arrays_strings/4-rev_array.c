#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of int
 * @a: an array of integers
 * @n: length of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int temp;

	--n;
	while (n >= j)
	{
		temp = a[n];
		a[n] = a[j];
		a[j] = temp;
		--n;
		++j;
	}
}
