#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints array of integers, then new line
 * @a: pointer to the array
 * @n: length of array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		++i;
	}
	printf("%d\n", a[i]);
}
