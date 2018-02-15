#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates a new pointer that assigns numbers
 * from min to max, inclusive
 * @min: minimum number
 * @max: maximum number
 *
 * Return: new pointer with all the numbers between
 * min and max inclusive
 */
int *array_range(int min, int max)
{
	int *numbers;
	int i, k;

	/* edge cases */
	if (min > max)
		return (NULL);

	numbers = malloc(sizeof(int) * (max + 1));

	/* malloc NULL edge case */
	if (numbers == NULL)
		return (NULL);

	i = 0;
	k = min;
	while (i <= max)
	{
		numbers[i] = k;
		++i;
		++k;
	}

	return (numbers);

}

