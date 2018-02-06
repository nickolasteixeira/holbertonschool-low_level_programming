#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagnal sums of a matrix
 * @a: value of the first address in memory
 * @size: size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{

	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;
	i = 0;
	while (i < size)
	{
		sum1 += a[((size + 1) * i)];
		++i;
	}

	i = 0;
	while (i < size)
	{
		sum2 += a[((size - 1) * (i + 1))];
		++i;
	}
	printf("%d, %d\n", sum1, sum2);

}
