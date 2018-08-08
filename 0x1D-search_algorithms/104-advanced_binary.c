#include "search_algos.h"
#include <stdio.h>
/**
 * print_numbers - prints all numbers in the array
 * @array: array to interate
 * @beg: where to start
 * @end: where to end
 *
 * Return: void
 */
void print_numbers(int *array, size_t beg, size_t end)
{
	size_t i;

	i = beg;
	if (i <= end)
		printf("Searching in array: ");

	i = 0;
	while (beg <= end)
	{
		printf("%u", array[beg]);
		if (beg != end)
			printf(", ");
		++beg;
	}
	if (i <= end)
		printf("\n");
}
/**
 * s_binary - binary search
 * @array: array to search
 * @beg: where to begin the search
 * @end: where to end the search
 * @value: value to find
 *
 * Return: -1 if not found, index position if found
 */
int s_binary(int *array, size_t beg, size_t end, int value)
{
	int mid;

	print_numbers(array, beg, end);
	if (end >= beg)
	{
		mid = beg + (end - beg) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			return (s_binary(array, beg, mid - 1, value));
		else if (value > array[mid])
			return (s_binary(array, mid + 1, end, value));
	}
	return (-1);
}

/**
 * advanced_binary - binary search
 * @array: array to search
 * @size: size of the array
 * @value: value to find
 *
 * Return: -1 if not found, index position if found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (s_binary(array, 0, size - 1, value));
}
