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
	char *ptr = "";
	char *ptr2 = " ";

	va_start(numbers, n);
	i = 0;
	while (i < n)
	{
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", ptr);
			printf("%d%c", va_arg(numbers, int), *separator);
		}
		else if (separator != NULL)
		{
			printf("%s", ptr);
			printf("%d", va_arg(numbers, int));
		}
		else
		{
			printf("%s", ptr);
			printf("%d", va_arg(numbers, int));
		}
		ptr = ptr2;
		++i;
	}
	printf("\n");

	va_end(numbers);
}
