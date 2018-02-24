#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints a list of numbers separated by
 * the *separator parameter
 * @separator: character that separates the numbers being printed
 * @n: length of arguments being passed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(numbers, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		++i;
	}
	printf("\n");

	va_end(numbers);
}
