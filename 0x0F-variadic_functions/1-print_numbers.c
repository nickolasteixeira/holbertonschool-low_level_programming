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


	va_start(numbers, n);
	i = 0;
	if (n > 0)
	{
		while (i < (n - 1))
		{
			if (separator != NULL)
				printf("%d%c ", va_arg(numbers, int), *separator);
			else
				printf("%d ", va_arg(numbers, int));
			++i;
		}
		printf("%d\n", va_arg(numbers, int));
	}

	va_end(numbers);
}
