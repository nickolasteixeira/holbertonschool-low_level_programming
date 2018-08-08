#include "search_algos.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers in the array
 * @array: array to loop through
 * @beg: place to start
 * @end: place to end
 *
 * Return: void
 */
void print_numbers(int *array, unsigned int beg, unsigned int end)
{
	unsigned int i;

	i = beg;
	if (i <= end)
		printf("Searching in array: ");
	while (beg <= end)
	{
		printf("%u", array[beg]);
		if (beg != end)
			printf(", ");
		if (beg == end)
			printf("\n");
		beg += 1;
	}
}
/**
 * exp_bin_search - exponential search
 * @array: array to search
 * @beg: beginning location to search
 * @end: end position to use
 * @value: value to find
 *
 * Return: the index position if found, -1 if not
 */
int exp_bin_search(int *array, unsigned int beg, unsigned int end, int value)
{
	unsigned int mid;

	print_numbers(array, beg, end);

	if (end >= beg)
	{
		mid = beg + (end - beg) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			return (exp_bin_search(array, beg, mid - 1, value));
		else if (value > array[mid])
			return (exp_bin_search(array, mid + 1, end, value));
	}
	return (-1);
}

/**
 * exponential_search - exponential search
 * @array: array to search
 * @size: length of the array
 * @value: value to find
 *
 * Return: the index position if found, -1 if not
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i > size - 1)
	{
		printf("Value found between indexes [%u] and [%lu]\n", i / 2, size - 1);
		return (exp_bin_search(array, i / 2, size - 1, value));
	}
	else
	{
		printf("Value found between indexes [%u] and [%u]\n", i / 2, i);
		return (exp_bin_search(array, i / 2, i, value));
	}
}


